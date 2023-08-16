#ifndef _3_CALC_H
#define _3_CALC_H

int add_f(int a, int b);
int sub_f(int a, int b);
int mul_f(int a, int b);
int div_f(int a, int b);
int mod_f(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
