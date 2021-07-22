#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
  *print_numbers - prints numbers follolwed by a new line
  *@separator: string to be printed between numbers
  *@n: number of variables
  *@...: variables to be passed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	for (i = 0; i < n; i++)
		printf("%d", va_arg(num, int));
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	_putchar('\n');
	va_end(num);
}
