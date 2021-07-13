#include <stdlib.h>
#include "holberton.h"

/**
  *free_grid - frees a 2 dimensional array
  *@grid: a 2 dimensional array
  *@height: height of the array
  */

void free_grid(**grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
