#include "main.h"

/**
 * _isupper  - check if the character is uppercase
 * @c: character to check
 * Return: 1 if uppercase 0 if othewise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
