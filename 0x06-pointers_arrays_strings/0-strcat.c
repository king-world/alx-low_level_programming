#include "main.h"

/**
 * _strcat - Concantenates two strings
 * @dest: This is the destination string
 * @src: This is the source string
 *
 * Return: The Concantenated destination string
 */

char *_strcat(char *dest, char *src)
{
	int destlength = 0;
	int srclength = 0;
	int u;

	for (u = 0; dest[u] != '\0'; u++)
		destlength++;
	for (u = 0; src[u] != '\0'; u++)
		srclength++;
	for (u = 0; u <= srclength; u++)
		dest[destlength + u] = src[u];
	return (dest);
}
