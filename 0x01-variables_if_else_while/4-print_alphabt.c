#include <stdio.h>

/**
 * main - program entry
 * Description: print alphabet and exclude e and q
 * Return: 0
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
