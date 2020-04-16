#include "shell.h"

int _strlen(char *str);

/**
 * _strcat - Concatenates two strings.
 * @first: Address to first string.
 * @second: Address to second string.
 * Return: A string @cat. It is the result of concatenates first and second.
 */

char *_strcat(char *first, char *second)
{
	char *cat;
	int i;
	int j;

	cat = malloc(sizeof(_strlen(first) + _strlen(second)));

	for (i = 0; first[i] != '\0'; i++)
		cat[i] = first[i];
	for (j = 0; second[i] != '\0'; j++, i++)
		cat[i] = second[j];
	cat[i] = '\0';

	return (cat);
}

/**
 * _strlen - Function that counts how many elements are in a string
 * @str: String the it will count the elements
 * Return: the number of characters of a string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}

