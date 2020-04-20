#include "shell.h"
/**
 * exec_func - Receive the input and start the process to execute the command.
 * @phrase: is the input received from the stdin.
 * Return: 0 on success.
 */
int exec_func(char *phrase)
{
	char **all_tokens = NULL;
	int i;

	all_tokens = sep_by_space(phrase);

	execve(all_tokens[0], all_tokens, NULL);
	perror("Error");
	for (i = 0; all_tokens[0] != NULL; i++)
		free(all_tokens[i]);
	free(all_tokens);
	fflush(stdin);
	_exit(127);
}
