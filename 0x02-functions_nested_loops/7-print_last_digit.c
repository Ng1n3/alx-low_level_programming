#include "main.h"
/**
* print_last_digit - prints the three digits of a number.
* @n: digit to find three of
*Return: the Last three digits
*/

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar ((n % 1000) + '0');
	return (n % 1000);
}
