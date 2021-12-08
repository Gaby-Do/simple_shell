#ifndef SHELL_H
#define SHELL_H
#define DELI "'\n''\t' :"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "shell.h"
#include <sys/wait.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

extern char **environ;

/* builtins*/
void built_in(char *string);
int _env(void);
void ex_it(void);

/* de impresión*/
int _putchar(char c);
int _prints(char *c);

/* de operación*/
char *prompt(void);
char **valida(char *string);
char **_path_fun(char **tekila);
int ejecuta(char **args);
int _strstr(char *haystack, char *needle);

/* auxiliares */
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *str_concat(char *s1, char *s2);
char **_toks(char *s);
int _ctoks(char *s);
void _fpptonks(char **avg, int c);
char **_path(void);
int lenaa(char **s);
unsigned int _strlen(char *s);
int strlen2(char *s);

#endif
