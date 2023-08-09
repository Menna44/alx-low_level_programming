#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: true for success, false otherwise
 */
int main(int argc, char *argv[])
{
	int num, num2, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (num2 = 0; num2 < 5 && num >= 0; num2++)
	{
		while (num >= coins[num2])
		{
			result++;
			num -= coins[num2];
		}
	}

	printf("%d\n", result);
	return (0);
}
