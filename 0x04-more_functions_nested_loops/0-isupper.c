#include "holberton.h"

/**
  *_isupper - checks if a character is uppercase
  *@c: Takes an argumen of integer value
  *
  *Return: 1 if is uppercase otherwise return 0
  */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
