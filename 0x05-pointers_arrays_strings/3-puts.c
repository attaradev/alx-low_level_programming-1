#include "main.h"

/**
 * _puts - function to print out a string
 * @str: an array of characters
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
		return;
	_puts(str + 1);

	_putchar(*str);
}
