#include "shell.h"
/**
 *_env - prints current env
 *Return: 0 succes
 */
void _env(char **arv __attribute__ ((unused)))
{
	int index = 0;

	while (environ[index])
	{
		_prints(environ[index]);
		_prints('\n');
		++index;
	}
}

/**
 * ex_it - exits the shell
 * Return: no return
 */

int ex_it(void)
{
	exit(0);
}
