#include "holberton.h"

/**
  *factorial - returns factorial of a number
  *@n: a number
  *
  *Return: -1 if number is less than 0,
  *1 if number is 0 or 1;
  *otherwisefactorial of the number
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
