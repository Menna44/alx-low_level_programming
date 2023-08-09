#include "main.h"
#include <stdio.h>

/**
 * main - function to print a number
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: true for success, false otherwise
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
