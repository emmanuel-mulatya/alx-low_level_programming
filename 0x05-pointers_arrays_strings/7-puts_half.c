#include "holberton.h"

/**
  * puts_half - prints half a string
  *@str: the string to be manipulated
  *Return: nothing
  */

void puts_half(char *str)
{
	int count, i;

	while (str[count] != '\0')
		count++;
	i = count / 2;

	while (i <= count)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
