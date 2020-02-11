#include "holberton.h"
/**
 * _abs - return absolute value of parameter
 * Return: absolute value of function parameter
 * @a: function parameter
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		a = a * (-1);
		return (a);
	}
}
