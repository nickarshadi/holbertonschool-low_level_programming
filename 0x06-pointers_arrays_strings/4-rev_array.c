#include "holberton.h"
/**
 * reverse_array - reverse an array
 * @a: string
 * @n: length
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int tmp = 0;

	n--;
	for (b = 0; b < n; b++)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
		n--;
	}
}
