#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free a 2 dimensional array
 *@grid: rows
 *@height: columns
 * Return: a pointer to a 2 D array of integers or null
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
