#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * Return: 1 if c is upper, otherwise 0
 * @c: we checking c
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
