#include "main.h"
/**
 * handle_exit - Handle the exit of a command.
 * @cmd: The command is taken from the mainfunction.
 * @status: The exit status of the command.
 *
 * Description:handles the exit status of cmd.
 *
 * Return: return nothing.
 */
void handle_exit(char **cmd, int status)
{
	int i = 0;

	for (i = 0; cmd[i]; i++)
	{
		free(cmd[i]);
		cmd[i] = NULL;
	}

	free(cmd);
	cmd = NULL;
	exit(status);
}
