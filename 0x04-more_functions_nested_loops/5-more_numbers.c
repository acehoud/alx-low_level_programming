#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers
 * Description: print (10) time the numbers
 * Return: void
 */

void more_numbers(void)
{
	int j = 0;
	int k;

	for (j = 0; j < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >=10)
				_putchar((k / 10) + 48);

			_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
