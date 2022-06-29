#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: check the length of string
 * Return: String length
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}
