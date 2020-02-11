#include "holberton.h"
/**
 * print_last_digit - print last digit of parameter
 * Return: return the last digit of functon parameter
 * @a: parameter
 */
int print_last_digit(int a)
{
	int b;
	if (a >= 0)
	{
	b = a % 10;
	_putchar(b + '0');
	return (b);
	}
	else
	{
	a = a * (-1);
	b = a % 10;
        _putchar(b + '0');
        return (b);
	}
}
