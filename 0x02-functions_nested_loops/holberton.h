#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include "_putchar.c"

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int t);
int print_last_digit(int c);
void jack_bauer(void);
void times_table(void);
int add(int i, int j);
void print_to_98(int n);
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

/**
  *_islower - checks for lowercase character
  *@c: The character to be checked
  *takes one argument which is of type int
  *
  *Return: 1 if character is lowercase otherwise 0
  */

int _islower(int c)
{

		if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

/**
  * _isalpha - checks for alphabets
  *@c: Takes argument value of int type
  *
  *Return: 1 if its upper or lowercase otherwise 0
  */

int _isalpha(int c)
{
	if (((c >= 'a') || (c >= 'A')) && ((c <= 'z') || (c <= 'Z')))
		return (1);
	else
		return (0);
}

/**
  *print_sign - checks if number is positive negative or zero
  *@n: takes an argument of int type
  *
  *Return: 1 if positve, -1 if negative otherwise 0.
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
	{
		return (0);
	}

}

/**
  * _abs - calculates the absolute value of a number
  *@t: argument of integer type
  *
  *Return: result of multiplication * -1 otherwise the number
  */
int _abs(int t)
{
	if (t < 0)
		return (t * -1);
	else
		return (t);
}

/**
  * print_last_digit - prints the last digit of a number
  *@c: data type int
  *
  *Return: the last digit
  */

int print_last_digit(int c)
{
	int last = c % 10;

	if (c < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}

/**
  * jack_bauer - prints time in 24 hours
  *
  *Return: nothing
  */

void jack_bauer(void)
{
	int H, h, M, m, max;

	max = 58;
	H = '0';

	while (H < '3')
	{
		if (H == '2')
		{
			max = '4';
		}

		h = '0';

		while (h < max)
		{
			M = '0';

			while (M < '6')
			{
				m = '0';

				while (m < 58)
				{
					_putchar(H);
					_putchar(h);
					_putchar(':');
					_putchar(M);
					_putchar(m);
					_putchar('\n');
					m++;
				}
				m = '0';
				M++;
			}
			M = '0';
			h++;
		}
		h = '0';
		H++;

	}
}
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

/**
  * add - adds two integers
  *@i: First argument
  *@j: second argument
  *
  *Return: result
  */

int add(int i, int j)
{
	int result;

	result = i + j;

	return (result);
}

/**
  *print_to_98 - prints all numbers to 98
  *@n: takes one argument of int type
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}

#endif
