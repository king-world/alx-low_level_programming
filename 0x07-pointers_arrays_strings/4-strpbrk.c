#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Input
 * @accept: Input
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int u;

	while (*s)
	{
		for (u = 0; accept[u]; u++)
		{
			if (*s == accept[u])
				return (s);
		}
	s++;
	}
	return ('\0');
}
