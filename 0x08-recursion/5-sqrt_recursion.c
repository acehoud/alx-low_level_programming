#include "main.h"

/**
 * _sqrt - fuction to calculate
 * @n: to retun
 * @k: to compare
 * Return: Always retun 0
 */

int _sqrt(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}
	else if (k * k > n)
	{
		return (-1);
	}
	
	return (_sqrt(n, k + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: number to retun
 * Return: Always return 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
