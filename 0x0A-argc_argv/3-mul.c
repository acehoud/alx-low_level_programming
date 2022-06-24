#include <stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: count
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		product *= atoi(argv[i]);
		i++;
	}
	printf("%d\n", product);
	return (0);
}
