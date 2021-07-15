#include "holberton.h"
#include "stdlib.h"

/**
  *malloc_checked - allocates memory using malloc
  *@b: size to be allocated
  *
  *Return:pointer to allocated memory
  *exits with value 98 if it fails
  */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
