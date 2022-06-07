#include "main.h"

/**
 * main - program entry point
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
