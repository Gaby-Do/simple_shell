#include "shell.h"
/**
 * valida - routes the info to the right pipe
 * @string: strig that comes from command line
 * Return: Null or pointer to pointer
 */

char **valida(char *string)
{
	char **tekila = NULL, **final = NULL, *ex = "exit", *en = "env", *deli = "/";
	int k = _ctoks(string);

	if (!string)
		return (final);
	tekila = _toks(string);
	if (_strcmp(tekila[0], en) == 0)
	{
		_fpptonks(tekila, k);
		free(string);
		_env();
		return (final);
	}
	if (_strcmp(tekila[0], ex) == 0)
	{
		_fpptonks(tekila, k);
		free(string);
		ex_it();
		return (final);

	}
	if (_strstr(tekila[0], deli))
	{
		free(string);
		return (tekila);
	}
	else
	{
		free(string);
		return (_path_fun(tekila));
	}
	return (final);
}
