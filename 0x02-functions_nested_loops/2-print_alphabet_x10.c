#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: Return all alphabet in smaller letters 10 times
 */

void print_alphabet_x10(void)
{
	int k;
	char u;

	for (k = 1; k <= 10; k++)
	{
		for (u = 'a'; u <= 'z'; u++)
			_putchar(u);
		_putchar('\n');
	}
}
