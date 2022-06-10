#include <stdio.h>

/**
 * main - entry point
 * Description: roothsqaure
 * Return - void
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", i);

	return (0);
}
