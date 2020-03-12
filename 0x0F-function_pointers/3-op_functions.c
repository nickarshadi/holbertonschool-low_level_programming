#include "3-calc.h"
/**
 * op_add - add two numbers a and b
 * @a: sumerand 1
 * @b: sumerand 2
 * Return: sum
 */
int op_add(int a, int b)
{
	a += b;

	return (a);
}
/**
 * op_sub - subtract two numbers
 * @a: int 1
 * @b: int 2
 * Return: return differnce;
 */
int op_sub(int a, int b)
{
	a -= b;

	return (a);
}
/**
 * op_mul - multiplicate a and b
 * @a: int 1
 * @b: int 2
 * Return: product
 */
int op_mul(int a, int b)
{
	a *= b;

	return (a);
}
/**
 * op_div - divide a through b
 * @a: int 1
 * @b: int 2
 * Return: divident
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	a /= b;

	return (a);
}
/**
 * op_mod - modulo of two numbers
 * @a: int 1
 * @b: int 2
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	a %= b;

	return (a);
}
