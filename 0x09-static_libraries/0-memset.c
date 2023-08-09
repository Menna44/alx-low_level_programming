#include "main.h"

/**
 * *_memset - fills memory
 * @s: buffer pointer
 * @b: constant byte
 * @n: how many to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
