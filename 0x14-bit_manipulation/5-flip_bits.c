#include "main.h"

/**
 * flip_bits - This counts the number of bits to change
 * to get from one number to another
 * @n: This is the first number
 * @m: This is the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		current = exclusive >> u;
		if (current & 1)
			count++;
	}

	return (count);
}
