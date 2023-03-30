#include "main.h"

/**
 * _strcpy - Copies string into dest
 * @dest: This is the destination array
 * @src: This is the source array
 *
 * Return: The destination array
 */

char *_strcpy(char *dest, char *src)
{
	int u;

	if (dest == NULL)
		return (NULL);
	for (u = 0; src[u] != '\0'; u++)
		dest[u] = src[u];
	return (dest);
}
