#include "main.h"

/**
 * print_line - function that draws a straight line in the termina
 * Description: draw a line in the terminal
 * @n: checking
 * Return: void
 */

void print_line(int n)
{
	n = 0;

	while (n < 5)
	{
		_putchar('_');
		n++;
	}

	_putchar('\n');
}	
