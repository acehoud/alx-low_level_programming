#include "main.h"

/**
 * print_sign - Function prototype
 * Description: Prints the sign of a number
 * @n: number to be checked
 * Return: 1 if, 0 and -1
 */

int print_sign(int n)
{
	int j;
	char k;

	if (n <= 0)
	{
		if (n == 0)
		{
			j = 0;
			k = '0';
		}
		else
		{
			j = -1;
			k = '-';
		}
	}
	else
	{
		j = 1;
		k = '+';
	}

	_putchar(k);

	return (j);
}
