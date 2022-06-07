#include "main.h"

/**
 * void print_alphabet - Function prototype
 * Description: function prototype to print lowercase
 * Return: void
 */

void print_alphabet(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	
	_putchar('\n');
}
