#include "main.h"
/**
 * _strlen_recursion - function that print the string length
 * @s: returned length
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
