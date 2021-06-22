#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include "_putchar.c"

void print_alphabet(void);
void print_alphabet_x10(void);

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
		putchar(10);
		i++;
	}
}

#endif
