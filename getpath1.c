#include "shell.h"

/**
 * _path - findis PATH, parses it and saves it in **args.
 * Return: pointer to parsed PATH, or NULL on fail.
 */

char **_path(void)
{
	char **final = NULL, *match = NULL, *nombre = "PATH";
	unsigned int x = 0, y = 0, z = 0, m = 0;

	while (environ[y] != NULL)
	{
		while (nombre[z] != '\0')
		{
			if (nombre[z] == environ[y][x])
			{
				z++, x++;
			}
			else
				break;
		}
		if (nombre[z] == '\0')
		{
			x++;
			match = malloc(sizeof(char) * strlen2(environ[y]) - x + 1);
			while (environ[y][x] != '\0')
			{

				match[m] = environ[y][x];
				m++, x++;
			}
			final = _toks(match);
			free(match);
			return (final);
		}
		else
			z = x = 0, y++;
	}
	free(match);
	return (final);
}
