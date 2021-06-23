#include "holberton.h"

/**
  * _abs - calculates the absolute value of a number
  *@t: argument of integer type
  *
  *Return: result of multiplication * -1 otherwise the number
  */
int _abs(int t)
{
	if (t < 0)
		return (t * -1);
	else
		return (t);
}
