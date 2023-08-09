#include "main.h"

/**
 * _isalpha - function to check for alphabetic
 * @c: the character to be checked
 * Return: true if alphabet, false otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
