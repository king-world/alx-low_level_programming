#include "main.h"

/**
 * print_chessboard - FUnction that prints the chessboard
 * @a: Array
 *
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int u;
	int k;

	for (u = 0; u < 8; u++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[u][k]);
		_putchar('\n');
	}
}
