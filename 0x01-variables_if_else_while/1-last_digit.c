#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}

	return (0);
}