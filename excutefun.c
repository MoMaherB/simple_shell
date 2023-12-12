#include "main.h"
/**
 * executefun - Execute a command
 * @command: List of arguments for the command
 * @argv: Program name and arguments
 * @idx: Index (if needed)
 *
 * Description: executes a command with the given arguments.
 * make to proccess one child excute the command and the parent
 * wait for it an back to main
 *
 * Return: return status.
 */

int executefun(char **command, char **argv, int idx)
{
	pid_t id;
	int i = 0;
	int status;
	char *full_path;

	full_path = _getpath(command[0]);

	if (!full_path)
	{
		errorfun(argv[0], command[0], idx);
		for (i = 0; command[i]; i++)
		{
			free(command[i]), command[i] = NULL;
		}
		free(command), command = NULL;
		return (127);
	}

	id = fork();

	if (id == 0)
	{
		if (execve(full_path, command, environ) == -1)
		{
			free(full_path);
			full_path = NULL;
			for (i = 0; command[i]; i++)
			{
				free(command[i]);
				command[i] = NULL;
			}
			free(command);
			command = NULL;
		}
	}
	else
	{
		waitpid(id, &status, 0);
		for (i = 0; command[i]; i++)
		{
			free(command[i]);
			command[i] = NULL;
		}
		free(command);
		command = NULL;
		free(full_path);
		full_path = NULL;
	}
	return (WEXITSTATUS(status));
}
