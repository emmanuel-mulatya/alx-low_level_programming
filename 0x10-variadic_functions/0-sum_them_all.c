#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - returns the sum of all its parameters
  *@n: number of integers passed to the function
  *@...:variables passed to function
  *
  *Return: sum of all variables
  *if n == 0, 0
  */
int sum_them_all(unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
