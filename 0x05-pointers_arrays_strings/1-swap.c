#include "holberton.h"

/**
  *swap_int - swaps two numbers
  *@a: first niumber
  *@b: second number
  *Returns: nothing
  */

void swap_int(int *a, int *b)
{

	int x = *a;

	*a = *b;
	*b = x;

}
