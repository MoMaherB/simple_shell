#include "main.h"

/**
 * _strcmp - Compare two strings
 * @str1: First string
 * @str2: Second string
 *
 * Description: This function compares two strings.
 * Return: return 0 if equal, +ve if the first greater
 * than the seconed or -ve if not
 */

int _strcmp(char *str1, char *str2)
{
	int c;

	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 != *str2)
		{
			c = (int)(*str1) - (int)(*str2);
			return (c);
		}
		str1++;
		str2++;
	}

	c = (int)(*str1) - (int)(*str2);

	return (c);
}
