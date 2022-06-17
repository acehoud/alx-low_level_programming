#include "main.h"

/**
 * _strcat -  function that concatenates two strings
 * @dest: pointer to the destination array
 * @src: pointer to the null-terminated
 * Return: Always return 0
 */

char *_strcat(char *dest, char *src)
{
	int i = -1;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	do {
		i++;
		dest[j] = src[i];
		j++;
	} while (src[i] != '\0');

	return (dest);
}
