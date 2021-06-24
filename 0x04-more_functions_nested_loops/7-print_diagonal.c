#include "holberton.h"

/**
  *print_diagonal - draws a diagonal line
  *@n: takes an argument of int type
  */

void print_diagonal(int n)
{
	int counter;
	int space;

	counter = 0;

	if (n > 0)
	{
		while (counter < n)
		{
			for (space = 0; space < counter; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar(10);
			counter++;
		}
	}
	else
	{
		_putchar(10);
	}
}
