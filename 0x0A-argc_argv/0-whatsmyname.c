#include "main.h"
#include <stdio.h>

/**
 * main - print function name
 * @argc: argc parameter
 * @argv: array of a command list
 * Return: true for success, false otherwise
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
