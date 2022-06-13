#include "main.h"

/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: the string to print 
 * Return: void
 */

void print_rev(char *s)
{
	int j = 0;

	while(s[j] != '\0')
		j++;

	while(j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
