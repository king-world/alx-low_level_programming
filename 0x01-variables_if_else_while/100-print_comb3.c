#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int u;
	int k;

	for (u = 0; u < 10; u++)
	{
		for (k = 1; k < 10; k++)
		{
			if (u < k && u != k)
			{
				putchar(u + '0');
				putchar(k + '0');
				if (u + k != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
