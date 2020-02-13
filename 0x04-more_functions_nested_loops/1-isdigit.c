#include "holberton.h"
/**
 * _isdigit - check for digit c
 * Return: return 1 if c is digit
 * @c: char parameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
