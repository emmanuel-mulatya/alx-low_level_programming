#include "holberton.h"

/**
  *actual_prime - calculates if a num is prime recursively
  *@n: number
  *@i: iterator
  *
  *Return: 1 if n is prime ,0 if not
  */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
  *is_prime_number - says if number is prime or not
  *@n: number to evaluate
  *
  *Return:1 if n is a prime number, 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
