#include "main.h"

/**
 * _islower - Thie function prints alphabets in lower cases
 * @c: Paramenter to be printed
 *
 * Return: 1 if it is lower case and 0 is different
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
