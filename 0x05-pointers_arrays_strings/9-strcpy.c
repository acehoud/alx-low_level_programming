#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer to array destination
 * @src: pointer to copy string
 * Return: Always retun 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		dest[i] = *(src + i);

	dest[i] = '\0';

	return (dest);
}
