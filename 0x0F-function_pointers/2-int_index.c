#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: Always return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (array && cmp)
	{
		while (a < size)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
			a++;
		}
	}
	return (-1);
}
