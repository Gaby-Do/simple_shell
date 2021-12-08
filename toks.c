#include "shell.h"
/**
 * lenaa - funtion that returns the number of pointers in a p-tp
 * @s: p-t-t
 * Return: the number
 */

int lenaa(char **s)
{
	int i = 0;
	char **str = NULL;

	str = s;
	for (i = 0; str[i]; i++)
		;
	i++;
	return (i);
}

/**
 * _fpptonks - function that frees array of pointers
 * @avg: array of pointers be freed
 * @c: number of pointers in the array
 */

void _fpptonks(char **avg, int c)
{


	while (c--)
	{
		free(avg[c]);
	}
	free(avg);
}

/**
 * _ctoks - function that counts number of tokens
 * @s: string to be counted
 * Return: number of tokens
 */

int _ctoks(char *s)
{
	char *tok = NULL, *trab = NULL, deli[] = "'\n''\t' :", temp[1024];
	int i = 0;

	for (i = 0; i < 1024; i++)
		temp[i] = '\0';
	i = 0;
	trab = _strcpy(temp, s);
	tok = strtok(trab, deli);
	while (tok)
	{
		tok = strtok(NULL, deli);
		i++;
	}
	i++;
	return (i);
}

/**
 * _toks - functinon that parses a string into tokens
 * @s: string to be parsed
 * Return: a pointer to an array of strings (tokens)
 */

char **_toks(char *s)
{
	char deli[] = "'\n''\t' :", *tok = NULL, temp[1024], **argv, *str = NULL;
	int i = 0, len = _ctoks(s);

	for (i = 0; i < 1024; i++)
		temp[i] = '\0';
	i = 0;
	argv = malloc(sizeof(char *) * len);
	str = _strcpy(temp, s);

	tok = strtok(str, deli);
	while (tok)
	{
		argv[i] = _strdup(tok);
		tok = strtok(NULL, deli);
		i++;
	}
	argv[i] = _strdup(NULL);
	return (argv);
}
