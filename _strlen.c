#include "main.h"

/**
 * _strlen - Get the length of a string
 * @str: Input string
 *
 * Description: calculate the length of string.
 * Return: This fun returns the length of string.
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
