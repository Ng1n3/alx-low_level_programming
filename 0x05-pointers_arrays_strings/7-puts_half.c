#include "main.h"

/**
 * puts_half - prints out the first half of a string.
 * @str: input string to print.
 */

void puts_half(char *str)
{
	int i, n;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
