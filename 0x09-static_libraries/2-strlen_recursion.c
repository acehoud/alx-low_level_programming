#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: This is the string whose length is to be found
 * Return: Always return 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	
	return (1 + _strlen_recursion(++s));
}
