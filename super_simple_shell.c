#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "main.h"
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
	char *ar[2];
	pid_t p = 0;

	while (1)
	{
		_putchar ('$');/*prompt*/
		chars = getline(&buffer, &bufsize, stdin);/*get the line entered by user*/
		if (chars == -1)
		{
			_putchar ('\n');
			free(buffer);
			free(token);
			return (-1);
		}
		p = fork();
		if (p == 0)
		{
			ar[0] = strtok(buffer, "\n");
			ar[1] = NULL;
			if (execve(ar[0], ar, NULL) == -1)
			{
				printf("hsh: %s: command not found\n", ar[0]);
				return (-1);
			}
			exit(0);
		}
		else
		{
			wait(NULL);
		}
	}
	free(buffer);
	return (0);
}
