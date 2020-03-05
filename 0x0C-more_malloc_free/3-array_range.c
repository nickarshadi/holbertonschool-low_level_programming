#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - contain all values from min to max
 * @min: minimum number
 * @max: maximum number
 * Return: array or Null
 */
int *array_range(int min, int max)
{
	int a, b, c;
	int *ar;

	a = max - min;
	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * a + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (b = 0, c = min; b <= a; b++, c++)
	{
		ar[b] = c;
	}
	return (ar);
}
