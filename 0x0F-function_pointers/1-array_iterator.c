#include "function_pointers.h"

/**
 * array_iterator - array element  iteration
 * @array: variable
 * @size: array size
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
