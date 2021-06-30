#include "holberton.h"

/**
  *_strncpy - copys a string to another
  *@dest: where the string is to be copied;
  *@src: string to be copied
  *@n: bytes to be copied
  *
  *Return: pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i])
		j++;
	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
