#include "main.h"
/**
 * _strlen - function to return the string length
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int s_length= 0;

	while (*s != '\0')
	{
		s_length ++;
		s++;
	}

	return (s_length);
}
