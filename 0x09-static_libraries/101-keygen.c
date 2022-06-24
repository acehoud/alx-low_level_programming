#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 *
 * Return: Always return 0
 */

int main(void)
{
	int j = 0, k = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (k < 2772)
	{
		j = rand() % 128;

		if ((k + j) > 2772)
			break;

		k += j;

		printf("%c", j);
	}
	printf("%c\n", (2772 - k));

	return (0);
}
