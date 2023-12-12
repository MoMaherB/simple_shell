#include "main.h"
/**
 * _getpath - Get the path for a command
 * @cmd: Command name
 *
 * Description: retrieves the full path for command.
 * Return: char pointer of the valid path.
 */
char *_getpath(char *cmd)
{
    int i;
    struct stat united;
    char *env, *dir, *final_path;

    for (i = 0; cmd[i] != '\0'; i++)
    {
        if (cmd[i] == '/')
        {
            if (stat(cmd, &united) == 0)
            {
                return (_strdup(cmd));
            }

            return (NULL);
        }
    }

    env = _getenv("PATH");
    if (!env)
    {
        return (NULL);
    }
    dir = strtok(env, ":");
    while (dir != NULL)
    {
        final_path = malloc(_strlen(cmd) + _strlen(dir) + 2);
        if (final_path != NULL)
        {
            _strcpy(final_path, dir);
            _strcat(final_path, "/");
            _strcat(final_path, cmd);
            if (stat(final_path, &united) == 0)
            {
                free(env);
                return (final_path);
            }
            free(final_path);
            final_path = NULL;
            dir = strtok(NULL, ":");
        }
    }
    
    free(env);
    return (NULL);
}
