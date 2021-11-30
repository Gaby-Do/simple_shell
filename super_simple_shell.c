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
	char *arg[2], *ex[2];
	pid_t p = 0;

	ex[0] = "exit";
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
		arg[0] = strtok(buffer, "\n");
		arg[1] = NULL;
		if (arg[0] == ex[0])/*no logro implementar el exit*/
			return (0);
		p = fork();
		if (p == 0)
		{
			if (execve(arg[0], arg, NULL) == -1)
			{
				printf("hsh: %s: command not found\n", arg[0]);
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
