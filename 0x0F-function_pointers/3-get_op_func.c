#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - check what operator to use and return it
 * @s: operator
 * Return: operator valid result
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op && s[1] == 0)
		{
			return (ops[i].f);
		}
	i++;
	}
	printf("Error\n");
	exit(99);
}
