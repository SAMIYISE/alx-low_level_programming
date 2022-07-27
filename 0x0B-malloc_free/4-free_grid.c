#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - frees grid
* @grid: memory to be freed
* @height: height of the array
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
