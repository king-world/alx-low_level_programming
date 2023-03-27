#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char u;

	for (u = 'a' ; u <= 'z' ; u++)
		putchar(u);
	for (u = 'A' ; u <= 'Z' ; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
