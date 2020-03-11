#include <stddef.h>
#include "function_pointers"
/**
* array_iterator - execute function on array
* @array: array of integers
* @size: array size
* @action: function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
	{
		for (a = 0; i < size; a++)
		{
			action(array[a]);
		}
	}
}
