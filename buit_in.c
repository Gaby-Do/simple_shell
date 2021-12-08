#include "shell.h"
/**
 *_env - prints current env
 *Return: 0 succes
 */
int _env(void)
{
	int index = 0;

	while (environ[index])
	{
		_prints(environ[index]);
		_putchar('\n');
		++index;
	}
	return (0);
}

/**
 * ex_it - exits the shell
 * Return: no return
 */

int ex_it(void)
{
	exit();
}
