#include "main.h"
#include <string.h>

/**
 * my_palindrome - Function that computes if a string is palindrome
 * @s: pointer to the string
 * @j: lenght of  string
 * Return: Always return 0
 */

int my_palindrome(char *s, int j)
{
	if (j < 1)
		return (1);
	return (*s == *(s + j) ? my_palindrome(s + 1, j - 2) : 0);
}

/**
 * is_palindrome - function that returns 1 if
 * a string is a palindrome and 0 if not
 * @s: pointer to the string
 * Return: Always return 0
 */

int is_palindrome(char *s)
{
	int j = strlen(s) - 1;

	return (my_palindrome(s, j));
}
