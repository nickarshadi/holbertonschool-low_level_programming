#include "holberton.h"
/**
 * _sqrt_recursion - get the square root
 * @n: number
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return sq(n, 0);
}
int sq(int n, int x)
{
	int sum = x * x;

	if (sum == n)
	{
		return x;
	}
	else if (x == n)
	{
		return (-1);
	}
	else
	{
		return sq(n, x + 1);
	}
}
