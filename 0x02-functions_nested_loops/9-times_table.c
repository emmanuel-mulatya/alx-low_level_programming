#include "holberton.h"

/**
  *times_table - prints multiples of 1 to 9
  *
  */

void times_table(void)
{
	int row, column, fc, sc, mult;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
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
