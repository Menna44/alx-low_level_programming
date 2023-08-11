#include "main.h"

/**
 * malloc_checked - allocates memory function
 * @b: allocated num of bytes
 * Return: a pointer to a new memory
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
