#include "shell.h"
/**
  * exec_func - Separates line into tokens and executes exceve with flags.
  * @input: Address to a string inputted by user
  * Return: Return (0)
 **/
int exec_func(char *input)
{
	char **sort_tokens, **flag, **no_flag, **all_tokens;
	int found, count = 0, i = 0, j = 0;
	struct stat st;

	all_tokens = sep_by_space(input);
	if (count_args(all_tokens) > 1 && flags(all_tokens))
	{
		no_flag = get_params(all_tokens);
		flag = flags(all_tokens);
		count += count_args(flag);
		count += count_args(no_flag);
	}
	sort_tokens = malloc(sizeof(char *) * count);
	found = stat(all_tokens[0], &st);
	if (found != 0)
	{
		perror("Error");
		return (0);
	}
	sort_tokens[0] = malloc(_strlen(all_tokens[0]));
	sort_tokens[0] = all_tokens[0];
	if (count_args(all_tokens) > 1 && flags(all_tokens))
	{
		for (i = 1, j = 0; flag[j] != NULL; i++, j++)
		{
			sort_tokens[i] = malloc(_strlen(flag[j]));
			sort_tokens[i] = flag[j];
		}
		for (j = 0; no_flag[j] != NULL; j++, i++)
		{
			sort_tokens[i] = malloc(_strlen(no_flag[j]));
			sort_tokens[i] = no_flag[j];
		}
		sort_tokens[i] = NULL;
	}
	else
		sort_tokens[1] = NULL;
	execve(sort_tokens[0], sort_tokens, NULL);
	return (0);
}
