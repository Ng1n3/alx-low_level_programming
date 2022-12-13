#include "main.h"
/**
* _isalpha - test wheter a character is uppercase
* alpha letter from the English alphabet.
* @c: character to test
* Return: 1 if it is an alpha, 0 if it is not an alpha
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
