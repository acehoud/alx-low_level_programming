#include "main.h"

/**
 * _islower - Function prototype
 * Description: This islower checks if character is lowercase.
 * @c: ASCII character to be valuated
 * ReturN: 1 if lowercase else othwerise 0
 */

int _islower(int c)
{
	int iam_lower = c >= 97 && c <= 122 ? 1 : 0;

	return (iam_lower);
}
