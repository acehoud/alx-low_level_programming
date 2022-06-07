#include "main.h"

/**
 * _isalpha - Function prototype
 * Description : checks if a charter is a letter
 * @c: ASCII charater to be check
 * Return: 1 if is a letter else 0
 */

int _isalpha(int c)
{
	int iam_alpha = (c >= 97 && 122) || (c >= 65 && c <= 90) ? 1 : 0;

	return (iam_alpha);
}
