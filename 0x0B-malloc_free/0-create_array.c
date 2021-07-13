#include <stdlib.h>
#include "holberton.h"

/**
  *create_array - creates an array of characters
  *@size: size of the array
  *@c: character to be initialized
  *
  *Return:NULL if it fails else pointer to c
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array_c;

	if (size == 0)
		return (NULL);
	array_c = malloc(size * sizeof(char));
	if (array_c == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array_c[i] = c;
	return (array_c);
}
