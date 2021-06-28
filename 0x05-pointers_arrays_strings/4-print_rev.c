#include "holberton.h"

/**
  *print_rev - prints the reverse of a string
  *@s: the string to be reversed
  *Return: nothing
  */

void print_rev(char *s)
{
	char tmp;
	int length, reverse, i;

	length = _strlen(s);
	reverse = length - 1;

	for (i = 0; i < reverse; i++)
	{
		tmp = s[i];
		s[i] = s[reverse];
		s[reverse] = tmp;
		reverse--;
	}
	_putchar('\n');
}
