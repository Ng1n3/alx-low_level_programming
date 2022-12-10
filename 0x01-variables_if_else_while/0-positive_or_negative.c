#include <stdlib.h>
#include <time.h>
/**
* main - determine if a random numer is positive, negative or zero
*
* Return: 0 on success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		prinf("%d is zero", n);
	}
	return (0);
}
