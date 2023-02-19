#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/** 
 * main - main function to generate a random number 
 *
 * Retutn: always 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	if else (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if else (n < 0)
	{
                printf("%d is negative\n", n);
	}
	return (0);
}
