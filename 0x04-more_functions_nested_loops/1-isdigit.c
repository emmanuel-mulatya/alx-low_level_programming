#include "holberton.h"

/**
  * _isdigit - checks if a character is a digit
  *@c: takes an argument of type int
  *
  *Return: 1 if its a digit otherwise 0
  */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
