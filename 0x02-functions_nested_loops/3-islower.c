#include "main.h"

/**
 * int _islower - Prototype function
 * Description: This islower checks between lower case
 * @c: ASCII to be valuated
 * ReturN: 1 if successful else othwerise 0
 */

int _islower(int c)
{
	int iam_lower = c >= 97 && c <= 122 ? 1 : 0;

	return (iam_lower);
}
