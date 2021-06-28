#include "holberton.h"

/**
  *rev_string - reverses a string
  *@s:string to be reversed
  *Return: nothing
  */

void rev_string(char *s)
{
	int c, i;
	char *begin, *end, tmp;

	i = 0;
	begin = s;
	end = s;

	while (s[i] != 0)
		i++;

	for (c = 0; c < i - 1; c++)
		end++;
	for (c = 0; c < i / 2; c++)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;

		begin++;
		end--;
	}
}
