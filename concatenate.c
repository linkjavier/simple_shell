#include "shell.h"

int _strlen(char *str);

/**
 * _strcat - concatenates two strings.
 * @first: first string.
 * @second: second string.
 * Return: A string that concatenates first and second.
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
 * _strlen - function that count how many elements are in a string
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

