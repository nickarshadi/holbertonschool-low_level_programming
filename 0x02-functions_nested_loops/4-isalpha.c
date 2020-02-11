#include "holberton.h"
/**
 * _isalpha - check if number is alphabetic
 * Return: 1 if alphabetic else 0
 * @c: variable
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
