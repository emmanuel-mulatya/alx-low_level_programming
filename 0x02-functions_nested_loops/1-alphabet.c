#include "holberton.h"

/**
  *print_alphabet -  prints lowercase alphabet
  *Takes no arguments
  *
  *reads ascii values of a-z and uses the _putchar function to print to stdout)
  */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;

	}
	_putchar(10);
}
