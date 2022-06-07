#include "main.h"

/**
 * print_alphabet - Function prototype
 * Description: Print letters of alphabets in lowercases
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

	_putchar(j);
}
