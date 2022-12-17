#include "main.h"

/**
 * more_numbers - print number 0 to 14 10 times
 * retun: nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;
	while (i <= 9)
	{
		while (j <= 14)
		{
			_putchar(j + '0');
			++j;
		}
		_putchar('\n');
		++i;
	}
}

