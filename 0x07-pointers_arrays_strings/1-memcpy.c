#include "main.h"

/**
 * _memcpy - Copies memmory area
 * @dest: Destination
 * @src: Source
 * @n: number of byte
 *
 * Return: Copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int u;
	int k = n;

	for (u = 0; u < k; u++)
	{
		dest[u] = src[u];
		n--;
	}
	return (dest);
}
