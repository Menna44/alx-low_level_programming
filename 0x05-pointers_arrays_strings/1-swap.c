#include "main.h"

/**
 * swap_int - function to swap a values of two integers
 * @a: first int
 * @b: second int
 *
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
