#include "main.h"

/**
 * print_rev - This prints the string in a reversed manner
 * @s: This is the function parameter
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int u;
	int count = 0;

	for (u = 0; s[u] != '\0'; u++)
		count++;
	for (u = count; u >= 0; u--)
		_putchar (s[u]);
	_putchar('\n');
}
