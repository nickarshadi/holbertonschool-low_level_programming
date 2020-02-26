#include "holberton.h"
/**
 * factorial - factorial number
 * @n: number
 * Return: factorys
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
