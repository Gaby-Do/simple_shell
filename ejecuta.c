#include "shell.h"

/**
 * ejecuta - function that executes a command in shell
 * @args: pointer to pointer
 * Return: 0 if success, 1 in other case
 */

int ejecuta(char **args)
{
	pid_t kid;
	int sta = 0;

	kid = fork();
	if (kid < 0)
		perror("Error");
	if (kid == 0)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("Error");
			exit(1);
		}
	}
	wait(&sta);
	return (0);
}
