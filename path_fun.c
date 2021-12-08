#include "shell.h"
/**
 * _path_fun - function that returns a pointer to point. with path to fun.
 * @tekila: pointer to pointer
 * Return: pointer to pointer
 */
char **_path_fun(char **tekila)
{
	char **paty = NULL, *pato = NULL, *patito = NULL, **final = NULL, *deli = "/";
	int flag = 1, k = lenaa(tekila), l = 0, m = 0, n = 0, contador = 0;
	struct stat buf;

	paty = _path();
	while (paty[m] && flag != 0)
	{
		patito = str_concat(paty[m], deli);
		pato = str_concat(patito, tekila[0]);
		flag = stat(pato, &buf);
		if (flag == 0)
		{
			final = malloc(sizeof(char *) * (k + 1));
			if (!final)
				return (NULL);
			final[n] = _strdup(pato);
			free(pato);
			n++;
			for ( ; n < k; n++)
			{
				final[n] = _strdup(tekila[n]);
			}
			final[n] = NULL;
			_fpptonks(tekila, k);
			l = lenaa(paty);
			_fpptonks(paty, l);
			free(patito);
			return (final);
		}
		m++;
		free(pato);
		free(patito);
	}
	if (flag != 0)
	{
		_fpptonks(tekila, k), l = lenaa(paty), _fpptonks(paty, l);
		return (NULL);
	}
	return (NULL);
}
