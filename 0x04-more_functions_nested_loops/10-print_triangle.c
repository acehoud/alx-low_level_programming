#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * Description: prints triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int a = 0, b, c = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; a < size; i++)
		{
			for (b = 0; b < size; b++)
				_putchar(b < c ? ' ' : '#');

			c--;
			_putchar('\n');
		}
	}
}
