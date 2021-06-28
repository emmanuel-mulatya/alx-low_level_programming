#include "holberton.h"

/**
  * _strlen - prints lenght of a string
  *@s: a string
  *Return: length of the string;
  */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
