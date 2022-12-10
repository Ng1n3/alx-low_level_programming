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
	/* your code goes there **/
	char last[] = "Last digit of";

	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	} else if (n % 10 == 0)
	{
		printf("0\n");
	} else
	{
		printf("less than 6 and not 0\n")
	}

	return (0);
}
