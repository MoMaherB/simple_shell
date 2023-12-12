#include "main.h"

/**
 * _itoa - Convert an integer to a string
 * @n: Integer to be converted
 *
 * Description: converts an integer to its string.
 * Return: returns a pointer to string representation of intger.
 */

char *_itoa(int n)
{
	char str[10];
	int i, strsize;
	char temp;

	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (strdup(str));
	}

	for (i = 0; n != 0; i++)
	{
		str[i] = '0' + n % 10;
		n /= 10;
	}

	strsize = i;

	for (i = 0; i < strsize / 2; i++)
	{
		temp = str[i];
		str[i] = str[strsize - i - 1];
		str[strsize - i - 1] = temp;
	}

	str[strsize] = '\0';

	return (strdup(str));
}
