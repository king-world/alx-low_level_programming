#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 1 (Succss)
 */
int main(void)
{
	char ubong[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19"

	write(STDOUT_FILENO, ubong, sizeof(ubong));

	return (1);
}
