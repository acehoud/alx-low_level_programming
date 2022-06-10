#include <stdio.h>

/**
 * main - entry point
 * Description: roothsqaure
 * Return - void
 */

int main(void)
{
	unsigned long int i = 3, j 612852475143;

	for (; i < 12057; i += 2)
	{
		while (j % i == 0 && j != i)
			j /= 1;
	}
	printf("%lu\n", j);

	return (0);
}
