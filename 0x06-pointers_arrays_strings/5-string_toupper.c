#include "main.h"

/**
 * string_toupper - Change lowercase to uppercase
 * @str: string to be converted
 *
 * Return: string
 */

char *string_toupper(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		if (str[u] >= 'a' && str[u] <= 'z')
			str[u] = str[u] - 32;
	}
	return (str);
}
