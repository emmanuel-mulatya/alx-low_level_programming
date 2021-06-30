#include "holberton.h"

/**
  *cap_string - capitalizes all words of a string
  *@str: string to be checked
  *
  *Return: nothing
  */

char *cap_string(char *str)
{
	int i;

	if (i == 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == '.' || str[i] == ';' ||
			str[i] == '!' || str[i] == '?' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
	{
		++i;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	else
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}

	return (str);
}
