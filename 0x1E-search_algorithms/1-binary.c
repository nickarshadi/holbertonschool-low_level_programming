#include "search_algos.h"


/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}


/**
 * binary_search - Search for a value in a sorted array via binary search.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in the array.
 * @value: Is the value to search for.
 * Return: the index where value is stored. Otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, m, r = 0;

	if (!array || size <= 0)
		return (-1);

	r = size - 1;
	print_array(array, r + 1);
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m;
		else
			return (m);
		print_array(array + l, r + 1 - l);
	}
	return (-1);
}
