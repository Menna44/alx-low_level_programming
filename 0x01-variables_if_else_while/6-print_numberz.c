#include <stdio.h>

/**
  * main - print num from 0-9
  *
  * Return: Always 0
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
