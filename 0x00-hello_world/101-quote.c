#include <stdio.h>

/**
 * main - Prints a statement
 *
 * Description: A C program that prints a statement to the standard error.
 *
 * Return: return 0
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dore Korpar, 2015-10-19\n");
	return (1);
}
