#include "main.h"

/**
 * print_numbers - function that prints the numbers
 * Description: print numbers from (0 -9)
 * Return: void
 */

void print_numbers(void)
{
	int j = 8;

	while (j <= 9)
	{
		_putchar(j);
		j++;
	}

	_putchar('\n');
}
