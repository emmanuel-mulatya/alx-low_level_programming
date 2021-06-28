#include "holberton.h"

/**
  * _strcpy - copies a string;
  *@dest: where the string is to be copied
  *@src: the string to be copied
  *Return: value of dest
  */

char *strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] <= '\0')
	{
		dest[i] = src [i];

		return dest;
	}
}
