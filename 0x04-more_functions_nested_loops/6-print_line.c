#include "main.h"

/**
 * print_line - function that draws a straight line in the termina
 * Description: draw a line in the terminal
 * @n: checking
 * Return: void
 */

void print_line(int n)
{
	int j = 0;

	if (n > 0)
	{
		for (; j < n; j++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
