#include <stdio.h>
#include <errno.h>

/**
 * main - Prints a statement
 *
 * Description: A C program that prints a statement to the standard error.
 *
 * Return: return 0
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19n\n", stderr);
	return (1);
}
