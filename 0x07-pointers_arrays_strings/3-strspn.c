#include "holberton.h"

/**
  *_strspn - gets the length of a prefix substring
  *@s:First string
  *@accept: Bytes to be checked
  *
  *Return:Number of bytes in initial segment
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prev = 0;
	unsigned int count = 0;

	int i;
	int j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		j = 0;
		prev = count;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				count++;
			j++;
		}

		if (prev == count)
			break;
		i++;
	}

	return (count);
}
