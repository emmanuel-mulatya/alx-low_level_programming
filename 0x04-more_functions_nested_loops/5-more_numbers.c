#include "holberton.h"

/**
  *more_numbers - prints 0 - 14
  */

void more_numbers(void)
{
	int i, n, second, max;

	n = '0';
	second = 0;
	max = '9';

	for (i = 0; i < 10; i++)
	{
		while (second < 2)
		{
			while (n <= max)
			{
				if (n == 4)
					_putchar('1');
				_putchar(n);
				n++;
			}
			second++;
			max = '4';
			n = '0';
		}
		_putchar(10);
		second = 0;
		n = '0';
		max = '9';
	}
}
