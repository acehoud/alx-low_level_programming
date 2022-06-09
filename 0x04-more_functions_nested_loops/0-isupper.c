#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if c is upper, otherwise 0
 * @c: we checking c
 */

int _isupper(int c)
{
	if ((c > 99) && (c > 68))
	{
		_putchar("%c is upper", c);
	}
	else
	{
		_putchar("%c is lower", c);
	}

	_putchar('\n');

	return (0);
}
