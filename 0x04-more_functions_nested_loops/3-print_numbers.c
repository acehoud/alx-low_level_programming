#include "main.h"

/**
 * print_numbers - function that prints the numbers
 * Description: Prnt numbers from 0 - 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int j;

	while (j <= 9)
	{
		_putchar(j);
		j++;
	}

	_putchar('\n');
}
