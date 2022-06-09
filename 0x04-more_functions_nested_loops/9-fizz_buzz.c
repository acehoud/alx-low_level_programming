#include <stdio.h>

/**
 * main - Entry point for a program
 * Description: print number 1 - 100, and fuzz for multiple of 3
 * with Fizz, multiple of 5 with Buzz and both 5 and 3 FizzBuizz
 * Return: 0
 */

int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("Buzz\n");

	return (0);
}
