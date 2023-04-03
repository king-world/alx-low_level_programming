#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int u;
	int v;
	int w;

	for (u = 0; u < 10; u++)
	{
		for (v = 1; v < 10; v++)
		{
			for (w = 2; w < 10; w++)
			{
				if (u < v && v < w)
				{
					putchar(u + '0');
					putchar(v + '0');
					putchar(w + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
