#include "main.h"
#include <unistd.h>

/**
 * _putchar - This helps to writes the character c to stdout
 * @c: This is the character to print
 *
 * Return: On success return 1.
 * On error, return  -1 and set errno appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
