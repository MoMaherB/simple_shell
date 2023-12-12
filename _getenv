#include "main.h"
/**
 * _getenv - Get the value of an environment variable.
 * @name: name of the environment variable.
 *
 * Description:
 * retrieves the value of the specified environment variable.
 *
 * Return:
 * On success, it returns a pointer to value environment.
 * If environment , returns NULL.
 */
char *_getenv(char *name)
{
    int i = 0;
    char *ptr, *dir, *value, *envalue;
    
    for (i = 0; environ[i]; i++)
    {
        ptr = _strdup(environ[i]);
        dir = strtok(ptr, "=");
        if (_strcmp(dir, name) == 0)
        {
            value = strtok(NULL, "\n");
            envalue = _strdup(value);
            free(ptr);

            return (envalue);
        }
        free(ptr);
        ptr = NULL;
        }
        return (NULL);
}
