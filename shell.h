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
void eof_func(char c);
char *_which(dir_st **head, char *input);
char *_getenv(const char *name);
void add_dir_to_sll(struct directories **head, char *directories);
struct directories *create_sll(struct directories **head, const char *str);
char **put_args(char **arr, char *str);
char **flags(char **args);
int count_args(char **arr);
char **sep_by_space(char *str);
char **get_params(char **args);
int exec_func(char *input);
int _strlen(char *str);
char *_strcat(char *first, char *second);
char *_strdup(const char *str);

#endif
