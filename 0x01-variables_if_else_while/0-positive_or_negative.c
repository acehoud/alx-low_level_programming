#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - program start point
 *Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	if (n > 0)
	{
		printf("%d: is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d: is zero\n", n);
	}
	else
	{
		printf("%d: is negative\n", n);
	}
	return (0);
}
