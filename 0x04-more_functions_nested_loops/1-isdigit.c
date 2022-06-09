#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * Return: 1 if c is digit otherwise 0
 * @c - we checking c
 */

int _isdigit(int c)
{
	char j = 'a';
	char k = 'A';
	c = 0;

	while (c <= 9)
	{
		while (j <= 'z')
		{
			return 0;
		}
		while (k <= 'Z')
		{
			return 0;
		}

		return 1;
		c++;
	}
}
