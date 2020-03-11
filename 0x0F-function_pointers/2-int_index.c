#include "function_pointers.h"

/**
 * int_index - write first coincidence of function != 0
 * @array: array of integers to be checked
 * @size: arraysize
 * @cmp: function to check if 0
 * Return: first occurence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && size && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
		return (0);
	}
	return (-1);
}
