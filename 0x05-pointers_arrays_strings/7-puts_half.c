#include "holberton.h"

/**
  * puts_half - prints half a string
  *@str: the string to be manipulated
  *Return: nothing
  */

void puts_half(char *str)
{
	int count, i, max;

	count = 0;

	while (str[count] != '\0')
		count++;
	max = count;
	i = (max - 1) / 2;
	while (i <= max)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
