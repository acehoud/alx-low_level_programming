#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 * @a: first pointer to int
 * @b: second pointer to int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
