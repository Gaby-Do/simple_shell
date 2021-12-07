#include "shell.h"

/**
 * _strdup - duplicates a string
 * @str: string to be copied
 *
 * Return: pointer to new string, NULL on fail
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *s = NULL;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;

	s = malloc(i);

	if (!s)
		return (NULL);

	while (i--)
		s[i] = str[i];
	return (s);
}


/**
 * _strcpy - Copies a string
 * @dest: destiny string.
 * @src: string to be copied.
 *
 * Return: pointer to destiny string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;
	count--;
	i = 0;

	for (i = 0; i <= count; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 if equal, negtive if s1<s2, positive if s1>s2
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while ((s1[a] == s2[b]) && (s1[a] != '\0') && (s2[a] != '\0'))
	{
		a++;
		b++;
	}
	c = s1[a] - s2[a];
	return (c);
}
