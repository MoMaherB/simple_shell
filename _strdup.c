#include "main.h"

/**
 * _strdup - Duplicate a string
 * @str: String to be duplicated
 *
 * Description: This function duplicates a string.
 * Return: return a duplicated string.
 */

char *_strdup(const char *str)
{
	char *cpy = NULL;
	int len = 0, i = 0;

	(void)str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}

	cpy[i] = '\0';

	return (cpy);
}
