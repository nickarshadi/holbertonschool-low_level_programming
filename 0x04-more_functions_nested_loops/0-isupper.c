#include "holberton.h"
/**
 * _isupper - check for uppercase char
 * Return: 1 or 0
 * @c: parameter
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
