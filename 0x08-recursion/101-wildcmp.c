#include "main.h"
/**
 * checker - checks identity of two strings
 * @s1: string 1 address
 * @s2: string 2 address
 * @i: left index
 * @j: special index
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (checker(s1, s2, i + 1, j) || checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp - check if strings can be identical
 * @s1: address 1
 * @s2: address 2
 *
 * Return: success if the strings are considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0));
}
