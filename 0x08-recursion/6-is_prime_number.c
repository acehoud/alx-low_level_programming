#include "main.h"

/**
 * my_prime - function that return a power of a number
 * @n: first number
 * @j: to compare mult
 * Return: Always retun 0
 */

int my_prime(int n, int j)
{
	int i = 0;

	if (j <= n)
	{
		if (n % j == 0)
			i++;
		return (i + my_prime(n, j + 1));
	}
	return (i);
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: a number
 * Return: Always return 0
 */

int is_prime_number(int n)
{
	if (my_prime(n, 1) == 2)
		return (1);
	else
		return (0);
}
