#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
		printf("The value of n is %d and it is positive \n", n);
	else if(n == 0)
		printf("The value of n is %d and it is zero \n", n);
	else
		printf("The value of n is %d and it is negative \n", n);
	RETURN (0);
}
