#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * Description: print diagonal on the terminal
 * @n: checked 
 * Return: void
 */

void print_diagonal(int n)
{
	int j = 0, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}
			
			_putchar(92);
			_putchar('\n');
		}
	}
}	
