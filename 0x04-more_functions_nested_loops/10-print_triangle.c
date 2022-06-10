#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * Description: prints triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int j = 0, k, l = size - 1;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (; j < size; i++)
		{
			for (k = 0; k < size; k++)
				_putchar(k < l ? ' ' : '#');			
			
		       	l--;
			_putchar('\n');
		}
	}
}
