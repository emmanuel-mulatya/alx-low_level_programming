#include <stdlib.h>
#include "holberton.h"

/**
  *str_concat - concatenates two strings
  *@s1: First string
  *@s2: Second string
  *
  *Return:NULL if failed
  *pointer to newly allocated memory containing s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, i_concat = 0, len = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0;  s1[i] || s2[i]; i++)
		len++;
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i_concat++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[i_concat++] = s2[i];
	return (concat);
}
