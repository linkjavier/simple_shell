#include "shell.h"
/**
  * main - Main function to execute the mini Shell.
  * Return: 0.
 **/
int main(int c __attribute__((unused)), char **av __attribute__((unused)))
{
	/*ssize_t n_chars, f_pid;
	size_t len = 0, i;
	char *phrase = NULL;
	char **all_tokens = NULL;*/
	if(!isatty(0))
	{
		n_chars = getline(&phrase, &len, stdin);
		strtok(phrase, "\n\t\r");
		all_tokens = sep_by_space(phrase);
		exec_func(all_tokens);
		free(phrase);
		for (i = 0; all_tokens != NULL; i++)
			free(all_tokens[i]);
		free(all_tokens);
	}
	else
	{
		do {
			write(STDOUT_FILENO, "$ ", 2);
			n_chars = getline(&phrase, &len, stdin);
			if (n_chars == EOF)
				eof_1(phrase);
			f_pid = fork();
			if (f_pid == 0)
			{
				strtok(phrase, "\n\t\r");
				all_tokens = sep_by_space(phrase);
				exec_func(all_tokens);
				free(phrase);
				for (i = 0; all_tokens != NULL; i++)
					free(all_tokens[i]);
				free(all_tokens);
			}
			else
				wait(NULL);
		} while (n_chars != -1);
	}
	return (0);
}

/**
  * eof_1 - frees phrase
  * @phrase: string.
  * Return: void.
  */
void eof_1(char *phrase)
{
	eof_func('\n');
	free(phrase);
	exit(0);
}

