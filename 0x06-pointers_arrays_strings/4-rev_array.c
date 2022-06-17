#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to an array
 * @n: number of array elements
 * Return: Always return 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (j = n / 2; j > 0; j--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] -= a[i];
	}
}
