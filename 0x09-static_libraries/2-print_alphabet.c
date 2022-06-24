#include <stdio.h>

/**
 *main - program start point
 *Description: Prints letters in lower case
 *Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x = x + 1;
	}

	putchar('\n');
	return (0);
}
