#include <stdio.h>
#include "_putchar.c"

/**
 *print_alphabet() - prints lowercase alphabet letters
 *
 *Return: Nothing
 */

void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++

	}
	_putchar(10);
}
