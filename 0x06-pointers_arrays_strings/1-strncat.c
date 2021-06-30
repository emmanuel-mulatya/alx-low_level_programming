#include "holberton.h"

/**
  *_strncat - appends the src string to dest
  *overwritting the null byte and will use at most
  *n bytes of src
  *@dest:string to be appended
  *@src: string to be removed
  *@n: maximum bytes to be printed
  *
  *Return: pointer to dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
