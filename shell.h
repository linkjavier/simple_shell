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

/**
  * struct directories - its used to find the PATH.
  * @dir: directories
  * @next: Pointer to next structure
  *
  * Description: directories structure
  * for shell project.
  */
typedef struct directories
{
	char *dir;
	struct directories *next;
} dir_st;

/*EOF function*/
void exect_prompt(void);
void h_signal(int sig);
void eof_func(char c);
void eof_1(char *phrase);
char **put_args(char **arr, char *str);
char **sep_by_space(char *str);
int exec_func(char *phrase);
int _strlen(char *str);
char *_strcat(char *first, char *second);
char *_strdup(const char *str);

#endif
