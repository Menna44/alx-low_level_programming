#include <unistd.h>

/**
 * _putchar - print char c
 * @c: The character to print
 *
 * Return 1
 * otherwise -1 returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
