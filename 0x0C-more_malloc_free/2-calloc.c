#include "main.h"

/**
 * _memset - copy chr
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (0);
}

/**
 * _calloc -  function that allocates memory
 * for an array, using malloc
 * @nmemb: array size
 * @size: type size
 * Return: Always return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	_memset(arr, 0, (nmemb * size));
	return (arr);
}
