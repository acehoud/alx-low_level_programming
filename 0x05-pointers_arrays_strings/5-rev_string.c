#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char *w = s;

	while (*(w+ 1) != '\0')
		w++;

	while (w > s)
	{
		char tmp = *w;
		*w-- = *s;
		*s++ = tmp;
	}
}
