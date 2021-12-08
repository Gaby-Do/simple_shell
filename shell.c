#include "shell.h"

/**
 * main - emulates a shell
 * Return: zero on success
 */

int main(void)
{
	char *s, **args;
	int c = 0, n = 0;
	size_t n1;

	while (1)
	{
		s = NULL;
		args = NULL;
		if (isatty(STDIN_FILENO))
			_prints("GJR >");
		n = getline(&s, &n1, stdin);
		if (n == -1)
		{
			free(s);
			if (isatty(STDIN_FILENO))
				_putchar('\n');
			exit(0);
		}
		args = valida(s);
		if (args)
		{
			ejecuta(args);
			c = lenaa(args);
			_fpptonks(args, c);
		}
	}
	if (s)
		free(s);
	return (0);
}
