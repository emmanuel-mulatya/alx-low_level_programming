#include "holberton.h"

/**
  *print_rev - prints the reverse of a string
  *@s: the string to be reversed
  *Return: nothing
  */

void print_rev(char *s)
{
	int i, j, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = j; i >= count; i--)
	{
		_putchar(s[j]);

	}
	_putchar('\n');
}
