#include "main.h"

/**
 * string_toupper - function that changes all 
 * lowercase letters of a string to uppercase
 * @str: string to be converted
 * Return: Always return 0
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}

	return (str);
}
