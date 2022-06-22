#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to retun
 * Return: Always return 0
 */

int _sqrt_recursion(int n)
{
	int i;

	i = 1;

	while (1)
	{
		if (n < 0)
			return (-1);
		if (i * i > n)
			return (-1);
		if (i * 1 == n)
			return (i);

		i = i + 1;
	}
}
