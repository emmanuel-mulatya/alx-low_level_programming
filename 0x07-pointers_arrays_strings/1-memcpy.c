#include "holberton.h"

/**
  *_memcpy - copies n bytes from memory are src to dest
  *@dest:where the bytes are to be copied
  *@src:where bytes are copird from
  *@n: size of bytes
  *
  *Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
