#include "shell.h"
/**
 *_env - prints current env
 *Return: 0 succes
 */
void _env(void)
{
  int index = 0;

  while (environ[index] != NULL)
    {
      write(STDOUT_FILENO, environ[i], strlen(environ[i]));
      write(STDOUT_FILENO, "\n", 1); /** puts not worked*/
    }
}
     
}

/**
 * ex_it - exits the shell
 * Return: no return
 */

int ex_it(void)
{
  exit(EXIT_SUCCESS);
}
