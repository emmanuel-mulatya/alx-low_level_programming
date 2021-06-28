#include "holberton.h"

/**
  * puts_half - prints half a string
  *@str: the string to be manipulated
  *Return: nothing
  */

void puts_half(char *str)
{
	int count, i;

	count = 0;

	while (str[count] != '\0')
		count++;
	if (count % 2 != 0)
	{
		for (i = ((count - 1) / 2); i < count; i++)
			_putchar(str[i]);


	}
	_putchar('\n');
}
