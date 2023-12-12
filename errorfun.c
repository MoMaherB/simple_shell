#include "main.h"
/**
 * errorfun - Handle errors
 * @nm: Name .
 * @command: Wrong Command.
 * @i: index value
 *
 * Description: This function handles errors in the program.
 * Return: (Description of the return value, if any)
 */

void errorfun(char *nm, char *command, int i)
{
	char *idx;
	char msg[] = ": not found\n";

	idx = _itoa(i);

	write(2, nm, _strlen(nm));
	write(2, ": ", 2);
	write(2, idx, _strlen(idx));
	write(2, ": ", 2);
	write(2, command, _strlen(command));
	write(2, msg, _strlen(msg));

	free(idx);
}
