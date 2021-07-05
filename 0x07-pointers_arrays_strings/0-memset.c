#include "holberton.h"

/**
  *_memset - fills the first n bytes of a
  *memory pointed by s with constant byte b
  *@s: string to be filled
  *@b:a constant byte
  *@n: the number of charcters to be replaced
  *
  *Return: a pointer to s
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

