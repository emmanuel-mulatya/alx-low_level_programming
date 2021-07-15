#include "holberton.h"
#include <stdlib.h>

/**
  *_realloc - reallocates mmemory using malloc and free
  *@ptr: - pointer to a memory previously allocated
  *@old_size:previous size
  *@new_size:new_size
  *
  *Return: pointer to reallocated memory
  *new_size == old_size, ptr
  *new_size == 0 and ptr is not NULL, NULL
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cp, *filter;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	return (NULL);
	ptr_cp = ptr;
	mem = malloc(sizeof(*ptr_cp) * new_size);
	if (mem == NULL)
		free(ptr);
	return (NULL);
	filter = mem;
	for (i = 0; i < old_size && i < new_size ; i++)
		filter[i] = *ptr_cp++;
	free(ptr);
	return (mem);
}
