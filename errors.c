#include "shell.h"
/**
 * _error - handles the error mesagges
 * @s: string that causes the error
 */
void _error(char *s)
{
	_prints("hsh: ");
	_prints(s);
	_prints(": command not found");
	_putchar('\n');
}
