#ifndef SHELL_H
#define SHELL_H

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>


void myhandle(int mysignal);
char *get_env_var(char **, char *);
char *get_input(void);
char **parse_input(char *);
void print_args(char **);

#endif
