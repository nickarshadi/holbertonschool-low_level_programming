#include "holberton.h"
/**
 * _strspn - print the prefix substring
 * @s: string
 * @accept: accept prefix
 * Return: return length
 */
unsigned int _strspn(char *s, char *accept)
{
	int b = 0;
	int c = 0;
	int d = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		d = 0;
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				d = 1;
				break;
			}
		}
		if (d == 0)
		{
			break;
		}
	}
	return (b);
}
