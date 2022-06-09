#include "main.h"

/**
 * print_most_numbers - function that prints the numbers
 * Description: print numbers and skip 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int j = 0;

	while (j <= 9)
	{
		if (j == 2)
		{
			j = j + 1;
			continue;
		}
		else if (j == 4)
		{
			j = j + 1;
			continue;
		}

		_putchar(j);
		j++;
	} 

	_putchar('\n');
}
