#include "main.h"

/**
 * leet - Encoding a string
 * @str: String to be encoded
 *
 * Return: Encoded String
 */

char *leet(char *str)
{
	int u;
	int k;

	char *a = "aAeEoOtTlT";
	char *b = "4433007711";

	for (u = 0; str[u] != '\0'; u++)
	{
		for (k = 0; a[k] != '\0'; k++)
		{
			if (str[u] == a[k])
				str[u] = b[k];
		}
	}
	return (str);
}
