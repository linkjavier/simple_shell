#include "shell.h"
/**
 * count_args - Counts the number of elements on an 2D array
 * @arr: 2D array
 * Return: number of elements of the 2D array
 */
int count_args(char **arr)
{
	int count = 0;

	while (arr[count] != NULL)
		count++;

	return (count);
}
