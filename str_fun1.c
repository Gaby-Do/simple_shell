#include "shell.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string to be evaluated
 * @needle: character to be searched
 * Return: 1 or 0.
 */

int _strstr(char *haystack, char *needle)
{

	int i = 0, j = 0, len = 0;


	for (i = 0; needle[i] != '\0'; i++)
		len++;
	if (len == 0 || haystack == NULL)
		return (0);

	for (i = 0; haystack[i] != '\0'; )
	{
		while (needle[j] != '\0' && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;

			else
				break;
		}

		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (1);
	}
	return (0);
}
