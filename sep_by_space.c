#include "shell.h"
/**
 * sep_by_space - Splits a string into tokens (by space).
 * @str: string to be splited
 * Return: Array of tokens (splitted by spaces).
 */
char **sep_by_space(char *str)
{
	int len = 0, i = 0;
	char *copy = _strdup(str);
	char *token = strtok(copy, " ");/*separa la primera palabra*/
	char **all_tokens = NULL;

	while (token != NULL)
	{
		token = strtok(NULL, " ");/*separa desde la segunda palabra en adelante.*/
		len++;/*cuenta el numero de palabras en str.*/
	}
	all_tokens = malloc(sizeof(char *) * (len + 1));
	if (all_tokens == NULL)
		return (NULL);

	token = strtok(str, " ");/*separa la primera palabra*/
	while (token != NULL)
	{
		all_tokens[i] = malloc(sizeof(char) * _strlen(token) + 1);
		all_tokens[i] = token;/*Allocates string by string until NULL*/
		token = strtok(NULL, " ");/*Moves through strings*/
		i++;
	}
	all_tokens[i] = NULL;
	free(copy);

	return (all_tokens);
}
