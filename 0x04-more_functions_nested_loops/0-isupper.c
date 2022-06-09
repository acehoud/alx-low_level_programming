#include "main.h"

/**
 * _isupper- function that checks for uppercase character
 * Description: check if c upper
 * @c: checked
 * Return: 1 if the character is uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
