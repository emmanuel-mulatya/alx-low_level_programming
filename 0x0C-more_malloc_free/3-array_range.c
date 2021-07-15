#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min:first element
 *@max: last element
 *
 *Return:pointer to an array
 *NULL if it fails
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
