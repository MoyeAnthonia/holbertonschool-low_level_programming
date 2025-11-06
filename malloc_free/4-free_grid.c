#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that concatenates two strings.
 * @grid: the first array.
 * @height: the second array.
 *
 * Return: 0 always.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
