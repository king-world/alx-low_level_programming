#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
