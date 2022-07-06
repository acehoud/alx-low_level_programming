#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of lines
 * argv: array
 *
 * Return: Always return 0;
 */

int main(int argc, char *argv[])
{
	int Z;

	if (argc != 4)
	{
		print("Error\n");
		exit(99);
	}

	Z = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", R);

	return (0);
}
