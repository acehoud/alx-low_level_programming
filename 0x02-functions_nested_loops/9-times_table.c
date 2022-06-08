#include "main.h"

/**
 * times_table - Function prototype
 * Description: multiplyfrom 0  9
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			int a = i * j;
			int b = a / 10;
			int c = a % 10;

			if (j != 0)
			{
				if (a < 10)
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
