#include "main.h"
/**
 * root_s - calculates the root of n
 * @n: base number.
 * @i: iterator number.
 * Return: i.
 */
int root_s(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (root_s(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - calculates the natural square root of n
 * @n: base
 *
 * Return: result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (root_s(n, 2));
}
