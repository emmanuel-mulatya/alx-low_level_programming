#include "holberton.h"

/**
  * puts_half - prints half a string
  *@str: the string to be manipulated
  *Return: nothing
  */

void puts_half(char *str)
{
	int count, i, max, j;

	count = 0;

	while (str[count] != '\0')
		count++;
	max = count;
	i = (max - 1) / 2;
	for (j = i + 1; j < max; j++)
		_putchar(str[j]);
	_putchar('\n');
}
