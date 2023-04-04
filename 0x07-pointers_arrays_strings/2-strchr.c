#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Input
 * @c: Compared variable
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int u;

	for (u = 0; s[u] >= '\0'; u++)
	{
		if (s[u] == c)
			return (&s[u]);
	}
	return (0);
}
