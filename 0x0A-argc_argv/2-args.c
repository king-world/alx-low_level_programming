#include <stdio.h>
#include "main.h"

/**
 * main - Prints all received argument
 * @argc: Number of arguments
 * @argv: Argument array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
