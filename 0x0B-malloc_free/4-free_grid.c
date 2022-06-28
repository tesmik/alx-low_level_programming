#include "main.h"
#include <stdlib.h>
/**
 *free_grid - deallocate
 *@grid: two dimesional array of integer
 *@height: two dimesionl array
 *Return: 0.
 */
void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
