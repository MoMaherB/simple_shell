#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination buffer
 * @src: Source string
 *
 * Description: This function concatenates two strings.
 * Return: (Description of the return value, if any)
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
