#include "holberton.h"

/**
  *_islower - checks for lowercase character
  *@c: The character to be checked
  *takes one argument which is of type int
  *
  *Return: 1 if character is lowercase otherwise 0
  */

int _islower(int c)
{

		if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
