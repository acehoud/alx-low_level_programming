#include "main.h"

/**
 * print_last_digit - Function prototype
 * Description: to print last digit of a number
 * @n: checked number
 * Return: last digit of a number
 */

int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');

	return (0);
}
