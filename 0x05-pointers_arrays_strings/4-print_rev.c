#include "main.h"

/**
 * print_rev - prints a string in reverse to the std
 * @s: a string variable to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
