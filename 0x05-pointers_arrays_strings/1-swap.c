#include "main.h"
/**
 * swap_int - Swaps the value of a and b
 *
 * @a: This is the first value
 * @b: This is the second value
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
