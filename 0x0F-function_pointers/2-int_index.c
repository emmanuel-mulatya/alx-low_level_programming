#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@array: an array;
  *@size: size of the array
  *@cmp:pointer to a function
  *
  *Return:-1 if no element matches
  *-1 if size <= 0
  *the index of the first element for which the cmp function does not return 0
  */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
				return (i);
	}
	return (-1);
}
