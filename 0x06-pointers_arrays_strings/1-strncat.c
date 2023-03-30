#include "main.h"

/**
 * _strncat - concantenate n value of string
 * @dest: This is the destination string
 * @src: This is the source string
 * @n: The number of times to iterate and concantenate the strings
 *
 * Return: The concantenated destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int srclength = 0;
	int u;

	for (u = 0; dest[u] != '\0'; u++)
		destlength++;
	for (u = 0; src[u] != '\0'; u++)
		srclength++;
	for (u = 0; u < n; u++)
		dest[destlength + u] = src[u];
	return (dest);
}
