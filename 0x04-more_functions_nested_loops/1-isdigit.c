#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * Return: 1 if c is digit otherwise 0
 * @c - we checking c
 */

int _isdigit(int c)
{
	int _isdigit = c >= 48 && c <= 57 ? 1 : 0;

	return (_isdigit);
}
