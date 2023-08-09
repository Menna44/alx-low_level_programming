#include "main.h"
/**
 * _strncpy - function to copy  string
 * @dest: input dest
 * @src: input src
 * @n: input n
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
