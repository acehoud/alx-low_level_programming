#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int j = 0;
	int k = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
	}

	for (k = (j + 1) / 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}

	_putchar('\n');
}
