#include "main.h"

/**
 * puts_half - Prints second half of a string
 * @str: Function parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int u;
	int count = 0;

	for (u = 0; str[u] != '\0'; u++)
		count++;
	if (count % 2 == 0)
	{
		for (u = count / 2; str[u] != '\0'; u++)
			_putchar (str[u]);
		_putchar ('\n');
	}
	else if (count % 2 != 0)
	{
		for (u = (count - 1) / 2; str[u] != '\0'; u++)
			_putchar (str[u]);
		_putchar ('\n');
	}
}
