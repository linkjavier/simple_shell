#include "shell.h"

/**
 * main - entry point
 * @c: narg
 * @av: args
 * Return: 0 on success
 */

int main(int c __attribute__((unused)), char **av __attribute__((unused)))
{
	ssize_t n_chars = 0;
	char *phrase = NULL;
	size_t len = 0;

	if (!isatty(0))
	{
		n_chars = getline(&phrase, &len, stdin);
		strtok(phrase, "\n\t\r");
		exec_func(phrase);
	}
	else
	{
		signal(SIGINT, &h_signal);
		do {
			exect_prompt();
		} while (n_chars != -1);
	}
	return (0);
}

/**
 * exect_prompt - function to execute the prompt to receive data from stdin
 */
void exect_prompt(void)
{
	pid_t f_pid;
	int status = 0;
	ssize_t n_chars = 0;
	char *phrase = NULL;
	size_t len = 0;

	write(STDOUT_FILENO, "$ ", 2);
	n_chars = getline(&phrase, &len, stdin);

	if (n_chars == EOF)
	{
		write(1, "\n", 1);
		free(phrase);
		exit(0);
	}
	if (_strcmp(phrase, "\n") != 0)
	{
		f_pid = fork();
		if (f_pid == 0)
		{
			strtok(phrase, "\n\t\r");
			exec_func(phrase);
		}
		else
		{
			if (!wait(&status))
				perror("Error wait");
		}
		free(phrase);
	}
	else
	{
		free(phrase);
	}
}
