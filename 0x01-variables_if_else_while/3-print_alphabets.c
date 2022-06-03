#include <stdio.h>

/**
 * main - starting point
 * Description: print alpHABET
 * Return: 0
 */

int main(void)
{
	char x = 'a';
	
	while (x <= 'z')
	{
		putchar(x);
		x = x + 1;
		
		char y = 'A';

		while (y <= 'Z')
		{
			putchar(y);
			y = y + 1;
		}
	}

	putchar('\n');
	return (0);
}
