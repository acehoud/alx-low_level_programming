#include <stdio.h>

/**
 * main - start point
 * Return: 0
 */

int main(void)
{
	int j = 0;

	while (j < 10)
	{
		putchar(48 + j);

		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}

		j++;
	}

	putchar('\n');

	return (0);
}
