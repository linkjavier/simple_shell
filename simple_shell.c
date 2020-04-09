#include "shell.h"

int main()
{
	struct stat st;
	ssize_t rgl;
	size_t len = 0;
	char *lineptr;
	pid_t rf1;
	int found;
	char *argv[2];
	char *token;

	argv[1] = NULL;

	do
	{
		printf("#cisfun$ ");

		rgl = getline(&lineptr, &len, stdin);
		if (rgl == EOF)
		{
			end_of_line('\n');
			free(lineptr);
			exit(1);
		}
		token = strtok(lineptr, "\n");

		argv[0] = token;

		rf1 = fork();

		if (rf1 == 0)
		{
			found = stat(argv[0], &st);
			if (found == 0)
				execve(argv[0], argv, NULL);
			else
				perror("Error");
			return (0);
		}
		else
		{
			wait(NULL);
		}
	} while (rgl != -1);

	return (0);
}
