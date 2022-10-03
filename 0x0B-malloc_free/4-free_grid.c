#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -> frees two dimension array
 * @grid: two dimension array
 * @height: height
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int n;
	
	for (n = 0; n < height; n++)
		free(grid[n]);
	
	free(grid);
}
