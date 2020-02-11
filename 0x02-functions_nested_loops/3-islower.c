#include "holberton.h"
/**
 * _islower - check if number is lowercase
 * Return: 1 if lowercase else 0
 * @c: variable
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
