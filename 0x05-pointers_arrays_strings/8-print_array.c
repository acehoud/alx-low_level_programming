#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: an array
 * @n: elements in an array
 * Return: void
 */

void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
