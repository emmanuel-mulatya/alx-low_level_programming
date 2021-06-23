#include "holberton.h"
#include <stdio.h>

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
