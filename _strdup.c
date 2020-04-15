#include "shell.h"
/**
 * _strdup - duplicates a string.
 * @str: string to be duplicated.
 * Return: duplicate of the string.
 */
char *_strdup(const char *str)
{
	int i = 0;
	int j;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		dup[j] = str[j];
	}
	dup[j] = '\0';
	return (dup);
}
