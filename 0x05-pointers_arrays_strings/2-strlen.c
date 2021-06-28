#include "holberton.h"

/**
  * _strlen - prints lenght of a string
  *@s: a string
  *Return: length of the string;
  */

int _strlen(chsr *s)
{
	int length;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
