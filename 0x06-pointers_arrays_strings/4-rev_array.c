#include "holberton.h"
/**
 *
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;
	int d[500];

	for (b = 0; b <= n; b++)
	{
		d[b] = a[b];
	}
	for (c = 0; c <= n; c++)
	{
		a[c] = d[n - c]; 
	}
}
