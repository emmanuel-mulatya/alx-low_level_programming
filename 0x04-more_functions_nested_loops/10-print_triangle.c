#include "holberton.h"

/**
  *print_triangle - prints a triangle using hashes
  *@size: argument of int type
  */

void print_triangle(int size)
{
	int counter;
	int space;
	int hash;

	if (size > 0)
	{
		while (counter < size)
		{
			for (space = size - 1; space > counter; space--)
				_putchar(' ');
			for (hash = 0; hash < counter + 1; hash++)
				_putchar('#');

			_putchar(10);
			counter++;
		}
	}
	else
	{
		_putchar(10);
	}
}
