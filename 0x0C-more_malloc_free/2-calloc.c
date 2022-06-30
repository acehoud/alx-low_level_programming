#include "main.h"
#include <stdion.h>
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory
 * for an array, using malloc
 * @nmemb: array size
 * @size: type size
 * Return: Always return 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array = NULL;
	unsigned int i, j;
	char *k;

	if (size == 0 || nmemb == 0)
		return (NULL);
	j = nmemb * size;
	array = malloc(j);
	k = (char *)array;
	if (k != NULL)
	{
		for (i = 0; i < j; i++)
			k[i] = 0;
		return (k);
	}
	return (NULL);
}
