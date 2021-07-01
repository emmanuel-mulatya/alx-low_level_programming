#include "holberton.h"

/**
  *rot13 - encodes a string using rot13
  *@str: string to be encoded
  *
  *Return: pointer to str
  */

char *rot13(char *str)
{
	int i, j;

	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
				str[i] = rot[j];
		}
	}

	return (str);


}
