#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - simple shell
 * Description: we are trying to write a simple shell from scratch
 * Return: 0 on success, -1 on fail
 */
int main(void)
{
	char *buffer = NULL;
	char *token = NULL;
	size_t bufsize = 32;
	int chars = 0;
	const char s[2] = " ";

	while (1)
	{
		putchar ('$');/*prompt*/
		chars = getline(&buffer, &bufsize, stdin);/*get the line entered by user*/
		if (chars == -1)
		{
			putchar ('\n');
			free(buffer);
			free(token);
			return (-1);
		}
		token = strtok(buffer, s);/*separates the line in it's components/tokens*/
		while (token != NULL)
		{
			token = strtok(NULL, s);
		}
	}
	free(buffer);
	return (0);
}
