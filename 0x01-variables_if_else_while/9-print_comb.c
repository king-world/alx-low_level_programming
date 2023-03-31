#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0;
 */

int main(void)
{
	int u;

	for (u = 0; u < 10; u++)
	{
		putchar(u + '0');
		if (u != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
