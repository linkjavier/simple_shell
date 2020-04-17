#include "shell.h"
/**
 * put_args - Separates a string into spaces and put each element in an array
 * @arr: array that will receive the elements
 * @str: string to be separed
 * Return: **arr filled with the elements
 */
char **put_args(char **arr, char *str)
{
	int i = 0;
	/*char *dup = _strdup(str)*/
	char *token = strtok(str, " ");/*gets first string*/

	while (token != NULL)
	{
		/*Allocate space for each string*/
		arr[i] = malloc(sizeof(char) * _strlen(token) + 1);
		arr[i] = token;/*Allocates string by string until NULL*/
		token = strtok(NULL, " ");/*Moves through strings*/
		i++;
	}

	arr[i] = NULL;

	return (arr);
}
