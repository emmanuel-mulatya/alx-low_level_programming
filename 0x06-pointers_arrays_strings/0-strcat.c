#include "holberton.h"

/**
  *_strcat - append the src string to the dest
  *string overwritting the terminating null byte
  *@dest:string to be appended
  *@src:string to be concatenated
  *
  *Return: a pointer to the result of dest
  */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
