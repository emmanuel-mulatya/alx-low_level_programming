#include "holberton.h"

/**
  *print_line - prints a line
  *@n: takes an argument of int type
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar(10);
}
