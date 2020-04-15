#include "shell.h"

/**
  * get_params - Creates an array of strings that are not flags
  * @args: Array of all the strings or tokens.
  *
  * Return: Array of strings that are not flags.
  */

char **get_params(char **args)
{
	int i = 1;
	int wc = 0;
	char **params;

	while (args[i] != NULL)
	{
		if (*args[i] != '-') /* Contando los tokens que no son flags.*/
			wc++;
		i++;
	}

	params = malloc(sizeof(char *) * (wc + 1));

	i = 1;
	wc = 0;
	while (args[i] != NULL)
	{
		if (*args[i] != '-')
		{
			params[wc] = malloc(sizeof(char) * _strlen(args[i]));
			params[wc] = args[i];
			wc++;
		}
		i++;
	}

	return (params);/*Params es un array de strings que NO son flags*/
}

