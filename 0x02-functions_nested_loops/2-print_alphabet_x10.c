#include "holberton.h"

/**
  *print_alphabet_x10 - prints lowercase 10 times
  */

void print_alphabet_x10(void)
{
	int a;
	int i = 0;

	while (i < 9)
	{
		a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar(10);
		i++;
	}
}
