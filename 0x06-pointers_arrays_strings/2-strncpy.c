#include "main.h"

/**
 * _strncpy - This copies n number of string to another string
 * @dest: This is the destination string
 * @src: This is the source string
 * @n: This is the number of string to copy from the source
 *
 * Return: The Copied destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u;

	for (u = 0; u < n; u++)
		dest[u] = src[u];
	return (dest);
}
