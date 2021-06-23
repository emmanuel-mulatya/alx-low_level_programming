#include "holberton.h"
/**
  *print_times_table - prints multiples of a given integer
  *@n: takes arguments of integer data type
  *
  *Return: Nothing
  */

void print_times_table(int n)
{
	if ((n < 0) || (n > 15))
	{
		_putchar('\n');
	}
	else
	{
	int row, column, fc, sc, mult;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			mult = row * column;
			fc = mult / 10;
			sc = mult % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(sc + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(fc + '0');
				_putchar(sc + '0');
			}
		}
		_putchar('\n');
	}

	}

}
