#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Assign a random number to variable n
 * checks if number is postive, negative or zero
 * Return: (0)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0) /*checks if negative*/
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0) /*checks if positive*/
	{
		printf("%d is positive\n", n);
	}
	else /*checks if zero*/
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
