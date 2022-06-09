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

	while (j < 11)
	{
		k = 0;
		while (k < 15)
		{
			_putchar(k);
			k++;
		}

		_putchar('\n');
		j++;
	}

	_putchar('\n');
}
