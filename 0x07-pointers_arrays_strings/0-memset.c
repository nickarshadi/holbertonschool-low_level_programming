#include "holberton.h"
/**
 * _memset - store b in s
 * @s: pointer to memeory
 * @b: character to fill in
 * @n: integer n
 * Return: return adress of string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
