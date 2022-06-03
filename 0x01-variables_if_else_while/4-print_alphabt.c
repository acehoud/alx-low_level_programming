#include <stdio.h>

/**
 * main - program starting point
 * Description: print lowet case and jump q e
 * Return: 0
 */

int main(void)
{
	int j = 'a';

	while (j <= 'z')
	{
		if ((j != 'e') && (j != 'q'))
		{
			putchar(j);
			j = j + 1;
		}
	}

	putchar('\n');
	return (0);
}
		
