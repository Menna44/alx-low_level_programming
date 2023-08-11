#include "main.h"

/**
 * array_range -  array of int
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: array of int
 */
int *array_range(int min, int max)
{
	int i, size = (max - min) + 1;
	int *p;

	if (min > max)
		return (NULL);

	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
