#include "main.h"

/**
 * _calloc - function to do array memory allocation
 * @nmemb: array elements
 * @size: size of the array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;

	return (p);
}
