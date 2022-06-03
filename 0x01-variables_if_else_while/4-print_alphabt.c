#include <stdio.h>

/**
 * main - program starting point
 * Description: print lowet case and jump q e
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
			x = x  + 1;
		}
	}

	putchar('\n');
	return (0);
}
		
