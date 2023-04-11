#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: This is the number of arguments
 * @argv: This is teh array of arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
