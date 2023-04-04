#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address of memory to be filed
 * @b: The desired value
 * @n: Number of byte to be changed
 *
 * Return: Changed array with new value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int u;

	for (u = 0; n > 0; u++)
	{
		s[u] = b;
		n--;
	}
	return (s);
}
