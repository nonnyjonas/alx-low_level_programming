#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: array name
 * @size: array size
 * @action: pointer to the function you need to use
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
