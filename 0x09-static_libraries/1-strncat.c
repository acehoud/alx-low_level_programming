#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pinter to destination array
 * @src: pointer ro the null-terminated
 * @n: number of bytes to be ammended
 * Return: Always return 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j]; j++)
	{
	}

	for (i = 0; i < n && dest[i]; i++)
	{
		dest[i + j] = src[i];
	}

	dest[i + j] = '\0';

	return (dest);
}
