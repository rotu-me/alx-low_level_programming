#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the memory of the created grid
 * @grid: pointer to the grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
