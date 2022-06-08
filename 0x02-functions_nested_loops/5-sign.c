#include "main.h"

/**
 * print_sign - Function prototype
 * Description: Prints the sign of a number
 * Return: 1 if, 0 and -1
 */

int print_sign(int n)
{
	switch(n)
	{
	case n > 0:
		_putchar('+');
		return (1);
		break;
	case n == 0:
		_putchar('0');
		return  (0);
		break;
	case n < 0:
		_putchar('-');
		return (-1);
		break;
	}
}
