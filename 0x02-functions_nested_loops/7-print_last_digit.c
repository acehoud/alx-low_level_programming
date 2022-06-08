#include "main.h"

/**
 * print_last_digit - Function prototype
 * Description: to print last digit of a number
 * @n: checked number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	n = n % 10;
	
	while (n < 0)
	{
		n = -n;
		n++;
	}
	_putchar(n + '0');

	return (n);
}
