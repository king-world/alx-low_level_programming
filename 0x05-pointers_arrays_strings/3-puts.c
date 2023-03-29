#include "main.h"

/**
 * _puts - Prints the string
 * @str: This is the function
 *
 * Return: 0
 */

void _puts(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
		_putchar(str[u]);
	_putchar('\n');
}
