#include "holberton.h"
/**
 * _strcm - check two string
 * @s1: var1
 * @s2: var2
 * Return: asci code difference
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int div = 0;

	for (; s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a]; a++)
	{}
	div = s1[a] - s2[a];
	return (div);
}
