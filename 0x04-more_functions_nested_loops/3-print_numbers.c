#include "main.h"

/**
 * print_numbers-  function that prints the numbers
 * Description: Print numbers from 0 - 9 and store on _putchar
 * Return: void
 */

void print_numbers(void)
{
	int i 0;

	while (i < 10)
	{
		_putchar("%d", i);
		i++;
	}

	_putchar('\n');
}
