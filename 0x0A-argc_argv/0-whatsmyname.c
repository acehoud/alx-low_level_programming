#include <stdio.h>

/**
 * main - entry point
 * Description: program that prints its name, followed by a new line
 * @argc: count
 * @argv: value
 * Return: Always return 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
