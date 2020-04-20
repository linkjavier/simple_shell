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
#include <errno.h>

/*Signal fucntion*/
void handle_signal(int sig);
char **put_args(char **av, char *str);
int _strcmp(char *s1, char *s2);
char **sep_by_space(char *str);
char *_strdup(const char *str);
void free_dbl_arr(char **arr);
int exec_func(char *phrase);
void exect_prompt(void);
int _strlen(char *str);

#endif
