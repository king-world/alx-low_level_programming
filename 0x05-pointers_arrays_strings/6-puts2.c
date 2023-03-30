#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: This is the function parameter
 *
 * Return: 0
 */

void puts2(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		_putchar (str[u]);
		u++;
	}
	_putchar ('\n');
}
