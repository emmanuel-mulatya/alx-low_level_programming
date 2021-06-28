#include "holberton.h"

/**
  *_puts - prints a string
  *@str: The string to be printed
  *Return: Nothing
  */

void _puts(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

