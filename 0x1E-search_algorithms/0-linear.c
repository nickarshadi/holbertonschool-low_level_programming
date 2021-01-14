#include "search_algos.h"


/**
 * linear_search - Search for a value in an array via linear search.
 *
 * @array: Is a pointer to the first element of the array.
 * @size: Is the number of elements in array.
 * @value: Is the Value to search for.
 * Return: The first index where value is located.
 * If value os not present in array return -1
 * Every comparison for values prnts the value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		return (i);
		i++;
	}
	return (-1);
}
