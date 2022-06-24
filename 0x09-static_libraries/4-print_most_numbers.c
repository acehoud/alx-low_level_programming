#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * Description: print numbers and skip 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int j = '0';

	for (; j <= '9'; j++)
	{
		if (j != '2' && j != '4')
			_putchar(j);
	}

	_putchar('\n');
}
