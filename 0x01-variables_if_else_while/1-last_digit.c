#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main -main function
 *
 * Return: ALways 0
 */

int main(void)
{
	int n;
	int u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	u = n % 10;

	if (u > 5)
		printf("Last digit of %d is %d and is greater than 5", n, u);
	else if (u == 0)
		printf("Last digit of %d is %d and is 0", n, u);
	else if (u < 6 && u != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, u);
	printf("\n");
	return (0);
}
