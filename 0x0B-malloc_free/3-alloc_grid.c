#include <stdio.h>
#include <stdlib.h>

/* Allocate a 2D integer grid
Goal: allocate a height x width grid of integers on the heap and initialize all cells to 0
Learning c  is fun
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	
	if (width <= 0 || height <= 0)
		return NULL;
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return NULL;

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return NULL;
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	
	return grid;

}
