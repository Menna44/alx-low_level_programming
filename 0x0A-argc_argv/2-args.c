#include <stdio.h>
#include "main.h"

/**
 * main - function to print all arguments
 * @argc: argc parameter
 * @argv: array of args
 * Return: true for success, false otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
