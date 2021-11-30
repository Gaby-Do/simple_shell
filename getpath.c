#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int i = 0, j;
	char *p;

	p = "PATH";
	printf("iantes del for %s\n", environ[i]);
	for (i = 0; environ[i]; i++)
	{
		j = 0;
		printf("antes del while %s\n", environ[i]);
		printf("primera letra %c\n", environ[i][0]);
		while (j < 4 && (p[j] == environ[i][j]))
			j++;
		if (j == 3)
		{
			printf("%s\n", environ[i]);
			return (1);
		}
	}
	printf("no encontre nada");
	return (-1);
}
