#include "main.h"

/**
 * print_most_numbers-  function that prints the numbers
 * Description: We print numbers and skip 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ((i == 2) && (i == 4))
		{
			continue;
		}

		_putchar(i);
	}

	_putchar('\n');
}
