#include "main.h"
/**
 * handle_env - Handle environ.
 * @command: command array of string.
 *
 * Description: Handle enviroment.
 * Return: reset status.
 */
int handle_env(char **command)
{
	int i = 0;

	for (i = 0; environ[i]; i++)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
	}

	for (i = 0; command[i]; i++)
	{
		free(command[i]);
		command[i] = NULL;
	}

	free(command);
	command = NULL;

	return (0);
}
