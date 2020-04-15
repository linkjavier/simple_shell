#include "shell.h"

/**
  * flags - Function that creates an array of flag strings
  * @args:  array that has all the strings (tokens).
  *
  * Return: Array of flag strings or tokens.
  */
char **flags(char **args)
{

	int i = 0, count = 0;
	char **flags;

	while (args[i] != NULL)
	{
		if (*args[i] == '-') /*si el token es un flag.*/
			count++; /*me cuenta cuantos tokens son flags*/
		i++; /* va recorrriendo todos los tokens hasta NULL*/
	}
	/*Asignar espacio para array de punteros a flags*/
	flags = malloc(sizeof(char *) * (count + 1));
	count = 0;
	i = 0;
	while (args[i] != NULL)
	{
		if (*args[i] == '-')
		{
			/*asignarle espacio a cada flag string en el heap.*/
			flags[count] = malloc(sizeof(char) * _strlen(args[i]));
			flags[count] = args[i]; /*copie el string(flag) en el array flags*/

			count++;
		}
		i++;
	}
	flags[count] = NULL;

	return (flags);/*Retorna un array de punteros a flag strings*/
}
