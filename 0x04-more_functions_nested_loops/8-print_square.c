#include "holberton.h"

/**
  *print_square - prints a square
  *@size: takes one argument of int  type
  */

void print_square(int size)
{
	int counter;
	int nl;

	counter = 0;

	if (size > 0)
	{
		while (counter < size)
		{
			for (nl = 0; nl < size; nl++)
				_putchar('#');
			_putchar('\n');
			counter++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
