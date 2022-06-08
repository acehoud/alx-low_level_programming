#include "main.h"

/**
 * times_table - Function prototype
 * Description: multiplyfrom 0  9
 * Return: void
 */

void times_table(void)
{
	for (i = 0; i <= 9; i++)
	{
		for ( j = 0; j <= 9; j++)
		{
			int a = r * j;
			int b = a / 10;
			int c = a / 10;

			if (a != 0)
			{
				if (j < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(c + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(b + '0');
					_putchar(c + '0');
				}
			}
			else
			{
				_putchar('0');
			}
		}

		_putchar('\n');
	}
}
