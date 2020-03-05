#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings maximum size n
 * @s1: first string
 * @s2: second string
 * @n: maximum size
 * Return: return str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d, e, f;
	char *str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	if (n >= b)
	{
		c = a + b;
	}
	else
	{
		c = a + n;
	}
	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
	return (NULL);
	for (d = 0; d < a; d++)
	{
		str[d] = s1[d];
	}
	for (e = d, f = 0; e < c; e++, f++)
	{
		if (f <= n)
		{
			str[e] = s2[f];
		}
		else
		{
			break;
		}
	}
	str[e] = '\0';
	return (str);
}
