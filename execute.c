#include "shell.h"
/**
  * exec_func - Separates line into tokens and executes exceve with flags.
  * @all_tokens: Double pointer. 2D Array
  * Return: Return (0)
 **/
char **exec_func(char **all_tokens)
{
	int found;
	struct stat st;

	found = stat(all_tokens[0], &st);
	if (found != 0)
	{
		perror("Error");
		return (0);
	}

	execve(all_tokens[0], all_tokens, NULL);

	return (0);
}
