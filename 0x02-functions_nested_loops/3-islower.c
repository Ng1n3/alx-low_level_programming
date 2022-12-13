#include "main.h"

/**
* _islower - test if character is lower
* @c: charcter to test.
* Return: 1 if is a lowercase letter, 0 if it is not a lower letter.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
