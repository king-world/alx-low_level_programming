#include "main.h"
/**
 * _strcmp - Compares two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int u;

	for (u = 0; s1[u] != '\0' || s2[u] != '\0'; u++)
	{
		if (s1[u] != s2[u])
		{
			if (s1[u] < s2[1])
				return (s1[u] - s2[u]);
			else if (s1[u] > s2[u])
				return (s1[u] - s2[u]);
		}
		else
			return (0);
	}
	return (0);
}
