#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_strings - prints strings followed by a new line
  *@separator: string to be printed between the strings
  *@n: the number of strings
  *@...: vaariables passed to the function
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list string;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		_putchar('\n');
	}
}
