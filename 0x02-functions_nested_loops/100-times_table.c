#include "holberton.h"
/**
  *print_times_table - prints multiples of a given integer
  *@n: takes arguments of integer data type
  *
  *Return: Nothing
  */

void print_times_table(int n)
{
	int row, column, fc, sc, tc, mult;

	if ((n < 0) || (n > 15))
	{
	}
	else
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				mult = row * column;
				if (column == 0)
				{
					_putchar('0');
				}
				else if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult % 10) + '0');
				}
				else if ((mult < 100) && (mult >= 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((mult / 10) % 10 + '0');
					_putchar((mult % 10) + '0');
				}
				else if (mult > 99 && mult < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}

	}
}
