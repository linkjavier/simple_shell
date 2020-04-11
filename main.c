#include "shell.h"

/**
  * main - Main function to excute the mini Shell.
  * Return: 0.
  *
 **/

int main(void)
{
	ssize_t n_chars;/*Return value of getline (number of chars)*/
	size_t len = 0;
	char *phrase; /*Saves whats entered by getline*/
	pid_t f_pid;

	/*Divides between interactive and non-interactive mode*/
	if (!isatty(0))
	{
		n_chars = getline(&phrase, &len, stdin);
		strtok(phrase, "\n\t\r");
		exec_func(phrase);
	}
	else
	{
		do {
			printf("#cisfun$ ");
			n_chars = getline(&phrase, &len, stdin);
			/*End of file, condition*/

			if (n_chars == EOF)
			{
				eof_func('\n');
				free(phrase);
				exit(0);
			}
			f_pid = fork();
			if (f_pid == 0)
			{
				strtok(phrase, "\n\t\r");
				exec_func(phrase);
			}
			else
			{
				wait(NULL);
			}

		} while (n_chars != -1);
	}

	return (0);
}
