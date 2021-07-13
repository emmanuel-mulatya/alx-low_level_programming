#include <stdlib.h>
#include "holberton.h"

/**
  *alloc_grid - returns a pointer to a 2 dimensional array
  *of integers with each element initialized at zero
  *@width: with of the array
  *@height: height of the array
  *
  *Return:NULL if it fails
  *pointer to a 2 dimensional array
  */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		twoD[h] = malloc(sizeof(int *) * width);
		if (twoD[h] == NULL)
		{
			for (; h >= 0; h--)
				free(twoD[h]);
			free(twoD);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			twoD[h][w] = 0;
	}
	return (twoD);
}
