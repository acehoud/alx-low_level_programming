#include "main.h"

/**
 * int _islower - Prototype function
 * Description: This checks between lower case
 * @c: ASCII to be valuated
 * Returns: 1 if successful othwerise 0
 */

int _islower(int c)
{
	int _iamlower = c >= 97 && c <= 122 ? 1 : 0;
	
	return (_iamlower);
}
