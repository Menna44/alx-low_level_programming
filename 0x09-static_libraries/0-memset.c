#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address
 * @b: value
 * @n: how many bytes do we change
 *
 * Return: array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
