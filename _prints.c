#include "shell.h"

/**
 * _prints - function that prints a string
 * @c: string to be printed
 * Return: number of chars printed
 */

int _prints(char *c)
{
  int i = 0;

  for ( ; c[i]; i++)
    ;
  return (write(1, c, i));
}
