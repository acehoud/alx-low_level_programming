#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 * Description: print a square
 * @size: size of a square
 * Return: void
 */

void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
