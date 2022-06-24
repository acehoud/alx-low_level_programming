#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * Description: print diagonal on the terminal
 * @n: the number of lines
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}
	}
}
