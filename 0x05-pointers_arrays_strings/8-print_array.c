#include "main.h"

/**
 * print_array - Prints a designated number of array
 * @a: Function Parmeter
 * @n: number of array to be printed
 * Return: 0
 */

void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		if (u != n - 1)
			printf("%d, ", a[u]);
		else
			printf("%d", a[u]);
	}
	printf("\n");
}
