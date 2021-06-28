#include "holberton.h"
#include <stdio.h>

/**
  *print_array -  prints n elements of an array
  *@a:the array
  *@n:elements to be displayed
  *Return: nothing
  */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		while ( i != n - 1)
		{	printf("%d", a[i]);
			_putchar(',');
			_putchar(' ');
		}
		i++;
	}
	printf("\n");
}
