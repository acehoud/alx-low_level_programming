#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to a pointer
 * Return: Always return 0
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j;

		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
