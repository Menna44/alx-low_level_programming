#include "main.h"

/**
 * _atoi - convert string into int
 * @s: input string
 * Return: int value
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int con = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		con = (con * 10) + (s[i] - '0');
		i++;
	}
	con *= sign;
	return (con);
}
