#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * Description: We check if is a digit (0 - 9)
 * @c: charater to be checked
 * Return: 1 if its digit otherwise 0
 */

int _isdigit(int c)
{
	int _isdigit = c >= 48 && c <= 57 ? 1 : 0;

	return (_isdigit);
}
