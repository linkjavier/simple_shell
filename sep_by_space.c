#include "shell.h"

/**
 * sep_by_space - Splits a string into tokens (by space).
 * @str: string to be splited
 * Return: Array of tokens (splitted by spaces).
 */
char **sep_by_space(char *str)
{

	int len = 0;
	char **tokens;/*Array of tokens*/
	char *dup = _strdup(str);
	char *token = strtok(dup, " ");/*separa la primera palabra*/

	while (token != NULL)
	{
		token = strtok(NULL, " ");/*separa desde la segunda palabra en adelante.*/
		len++;/*cuenta el numero de palabras en str.*/
	}

		tokens = malloc(sizeof(char *) * (len + 1));
		if (tokens == NULL)
			return (NULL);
		put_args(tokens, str);

	free(dup);

	return (tokens);
}
