#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - list of operations
 * @s: string
 *
 * Return: pointer 
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", add_f},
		{"-", sub_f},
		{"*", mul_f},
		{"/", div_f},
		{"%", mod_f},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
