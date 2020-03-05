#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: part 1
 * @s2: part 2
 * Return: return new string that is theconcatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *co;
	int a, b, c, d, e, f;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	c = a + b;
	co = malloc(sizeof(char) * c);
	if (co == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < a; d++)
	{
		co[d] = s1[d];
	}
	for (e = d, f = 0; e < c; e++, f++)
	{
		co[e] = s2[f];
	}
	co[e] = '\0';
	return (co);
}
