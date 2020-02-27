#include "holberton.h"
/**
 * is_prime_number - check if number is prime number
 * @n: number
 * Return: 1 or zero
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
/**
 * prime - check for prime number
 * @n: number
 * @x: integer
 * Return: primenumber yes or no
 */
int prime(int n, int x)
{
	int y = n % x;

	if (x >= n)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		return (prime(n, x + 1));
	}
}
