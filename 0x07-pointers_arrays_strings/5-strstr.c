#include "holberton.h"

/**
  *_strstr - locates a substring
  * @haystack: string to searched through
  * @needle: string to match
  *
  *Return: pointer to initial segment of haystack
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start, nlen;

	nlen = start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}

	return (NULL);
}
