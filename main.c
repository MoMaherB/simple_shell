#include "main.h"
/**
 * main - Entry point for the simple shell program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:main function for simple shell.
 * Return:return 0;
 */
int main(int argc, char **argv)
{
	ssize_t linelen;
	char *line = NULL, *linecpy = NULL, *stoken = NULL;
	size_t n = 0;
	int tokenNum = 0, i = 0;
	char *DELIM = " \t\n";
	char **command = NULL;
	int status = 0, idx = 0;

	(void) argc;
	while (1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2);
		}
		linelen = getline(&line, &n, stdin);
		if (linelen == -1)
		{
			free(line);
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		idx++;
		linecpy = _strdup(line);
		stoken = strtok(linecpy, DELIM);
		while (stoken)
		{
			tokenNum++;
			stoken = strtok(NULL, DELIM);
		}

		free(linecpy);
		linecpy = NULL;
		if (tokenNum != 0)
		{
			command = malloc(sizeof(char *) * (tokenNum + 1));
			stoken = strtok(line, DELIM);
			while (stoken)
			{
				command[i] = _strdup(stoken);
				stoken = strtok(NULL, DELIM);
				i++;
			}

			free(line);
			line = NULL;
			command[i] = NULL;
			if (_strcmp(command[0], "exit") == 0)
				handle_exit(command, status);
			else if (_strcmp(command[0], "env") == 0)
				status = handle_env(command);
			else
				status = executefun(command, argv, idx);
			tokenNum = i = 0;
		}
		else
		{
			free(line);
			line = NULL;
		}
	}
	return (0);
}
