#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: pointer to first element of array
 * @size: size of an array
 * Return: Always return 0
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < size)
	{
		j = j + a[i];
		k = k + a[size - 1 - i];
		a = a + size;
		i++;
	}

	printf("%d, ", j);
	printf("%d\n", k);
}

