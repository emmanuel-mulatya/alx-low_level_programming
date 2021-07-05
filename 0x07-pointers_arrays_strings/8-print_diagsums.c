#include "holberton.h"
#include <stdio.h>

/**
  *print_diagsums - prints sum of two diagonals in a square matrix
  *@a: the array;
  *@size: size
  */

void print_diagsums(int *a, int size)
{
	int i;
	int fdiag = 0;
	int sdiag = 0;
	int prev = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0)
		{
			fdiag += *(a + i);
			prev = i;
		}
		else if (i == (prev + size + 1))
		{
			fdiag += *(a + i);
			prev = i;
		}
	}

	for (i = 0; i < size; i++)
	{
		sdiag += *(a + (size * (i + 1) - (i + 1)));
	}
	printf("%d, %d\n", fdiag, sdiag);
}
