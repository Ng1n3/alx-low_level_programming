#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - "assign a random number see if divisible by 5 or 6"
 *
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int b = n % 10;

	if (n % 10 > 5)
	{
		printf("last digit of %d is %i and is greater than 5\n", n, b);
	} else if ((n % 10 < 6) && (n % 10 > 0))
	{
		printf("last digit of %d is %i and is less than 6 and not 0\n", n, b);
	} else
	{
		printf("last digit of %d is %i and is 0\n", n, b);
	}

	return (0);
}
