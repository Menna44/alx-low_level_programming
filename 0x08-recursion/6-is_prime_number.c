#include "main.h"
/**
 * multi - find multipliers of n
 * @n: base
 * @i: iterator
 * Return: success if n is prime, fail otherwise.
 */
int multi(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (multi(n, i + 1));
}
/**
 * is_prime_number - check if n is prime
 * @n: base number.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (multi(n, 2));
}
