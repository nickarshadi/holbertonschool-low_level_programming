#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - return pointer to newly allocated space with copy of array
 * @str: original array
 * Return: the pointer to new string
 */
char *_strdup(char *str)
{
	int a; /* length */
	int b;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; *(str + a) != '\0'; a++)
	{}
	ar = malloc(sizeof(char) * a);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		ar[b] = str[b];
	}
	ar[b] = '\0';
	return (ar);

}
