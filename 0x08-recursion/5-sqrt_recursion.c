#include "holberton.h"

/**
  *check_int - checks int as a candidate for square root
  *@square: square of int
  *@x: an integer
  *Return: 1 if its a candidate
  */

int check_int(int square, int x)
{
	if (x * x == square)
		return (x);
	else if (x > square / x)
		return (check_int(square, x - 1));
	else if (x < square / x)
		return (check_int(square, x + 1));
	else
		return (-1);
}

/**
  *_sqrt_recursion - returns the natural square roots
  *@n: Number
  *
  *Return: square root otherwise -1
  */

int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, start));
}
