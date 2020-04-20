#include "shell.h"
/**
 * _strlen - function that count how many elements are in a string
 * @str: String the it will count the elements
 * Return: the number of characters of a string
 */
int _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strdup - function to duplicate a string
 * @str: string to be duplicated
 * Return: duplicate of the string
 */
char *_strdup(const char *str)
{
	int i = 0, j = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

/**
  * _strcmp: compares 2 strings
  * @s1: string 1
  * @s2: string 2
  * Return: integer
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}


/**
  * sep_by_space - separates string into tokens
  * @str: string
  * Return: double array
  */
char **sep_by_space(char *str)
{
	int len = 0;
	char **av = NULL;
	char *dupstr = _strdup(str);
	char *token = strtok(dupstr, " ");

	while (token != NULL)
		token = strtok(NULL, " "), len++;

	av = malloc(sizeof(char *) * (len + 1));

	put_args(av, str);
	free(dupstr);
	free(token);
	return (av);
}

/**
  * put_args - puts arguments on double array
  * @av: double array
  * @str: string
  * Return: double array
  */
char **put_args(char **av, char *str)
{
	int i = 0;
	char *dupstr = _strdup(str);
	char *token = strtok(dupstr, " ");

	while (token != NULL)
	{
		av[i] = _strdup(token);
		token = strtok(NULL, " ");
		i++;
	}
	av[i] = NULL;
	free(dupstr);
	return (av);
}


