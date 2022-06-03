#include <stdio.h>

/**
 *main - program start point
 *Description: Prints letters in lower case
 *Return: 0
 */

int main(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{
		putchar('\n');
		putchar(a);
          	a = a + 1;
	}
	return (0);
}

