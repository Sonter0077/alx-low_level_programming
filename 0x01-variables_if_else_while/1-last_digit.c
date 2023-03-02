#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare with 5
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand () - RAND_MAX / 2;
	last = % 10;
	if (last >5)
	{
		printf("last digit of %d is %d  and is greater than 5\n", last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d and is 0\n", last);
	}
	else (last < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", last);
	}
	return (0);
}
