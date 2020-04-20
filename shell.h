#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdlib.h>


/*EOF function*/
void exect_prompt(void);
void h_signal(int sig);
char **sep_by_space(char *str);
int exec_func(char *phrase);
int _strlen(char *str);
char *_strdup(const char *str);
int _strcmp(char *s1, char *s2);

#endif
