#include "holberton.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory to an arroy of
  *nmeb elements of size bytes
  *@nmeb: number of elements
  *@size: size of the array
  *
  *Return:pointer to the allocated memory
  *NULL if malloc fails
  */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *mem;
	char *filter;
	unsigned int i;

	if (size == 0)
		return (NULL);
	mem = malloc(size * nmeb);
	if (mem == 0)
		return (NULL);
	filter = mem;
	for (i = 0; i < (nmeb * size); i++)
		filter[i] = '\0';
	return (mem);
}
