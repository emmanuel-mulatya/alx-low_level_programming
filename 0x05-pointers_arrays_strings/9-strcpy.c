#include "holberton.h"

/**
  * _strcpy - copies a string;
  *@dest: where the string is to be copied
  *@src: the string to be copied
  *Return: value of dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src  + i) != '\0'; i++)
		dest[i] = *(src + i);
	dest[i] = '\0';

	return (dest);
}
