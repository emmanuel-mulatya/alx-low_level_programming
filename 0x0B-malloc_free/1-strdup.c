#include <stdlib.h>
#include "holberton.h"

/**
  *_strdup - returns pointer to newly allocated space
  *which contains a copy of the string given
  *@str: A string
  *
  *Return:NULL if insuficient space
  *otherwise pointer to duplicate string
  */

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
