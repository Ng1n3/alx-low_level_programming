#include "main.h"

/**
 * print_diagonal - print n in a diagonal way.
 * @n: the number of lines
 * return: nothing.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for(j = 1; j <= n; j++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					_putchar(' ');
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
