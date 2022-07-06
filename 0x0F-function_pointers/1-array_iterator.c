#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size of an array
 * @action: pointer to function
 *
 * Return: Always return 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action != NULL && array != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
