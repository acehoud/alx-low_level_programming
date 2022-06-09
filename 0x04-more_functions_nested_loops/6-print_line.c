#include "main.h"

/**
 * print_line - function that draws a straight line in the termina
 * Description: draw a line in the terminal
 * @n: checking
 * Return: void
 */

void print_line(int n)
{
	int l = 0;

	while (l < 5)
	{
		_putchar('_');
		l++;
	}

	_putchar('\n');
}	
