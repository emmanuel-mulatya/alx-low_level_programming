#include "holberton.h"

/**
  * _isalpha - checks for alphabets
  *@c: Takes argument value of int type
  *
  *Return: 1 if its upper or lowercase otherwise 0
  */

int _isalpha(int c)
{
	if (((c >= 'a') || (c >= 'A')) && ((c <= 'z') || (c <= 'Z')))
		return (1);
	else
		return (0);
}
