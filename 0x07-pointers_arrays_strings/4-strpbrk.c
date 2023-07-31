#include "main.h"
/**
 * _strpbrk - looks for a string in any set
 *@s: first char value
 *@accept: second char value
 *
 * Return: return the result
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
