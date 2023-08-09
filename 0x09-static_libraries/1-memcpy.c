#include "main.h"
/**
 *_memcpy - copy by memory area
 *@dest: storing memory
 *@src: copied memory
 *@n: numof bytes
 *
 *Return: new copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
