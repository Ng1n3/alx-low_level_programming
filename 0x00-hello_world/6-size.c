#include <stdio.h>

/**
 * main - entry point
 * Description: 'size of data'
 * Return: 0
 */

int main(void)
{
	int 1;
	long int b;
	long long int 11;
	char d;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(1));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(11));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
