#include "main.h"

/**
 * _strlen - returns the length of the string
 *
 * @s: The variable that houses the string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
