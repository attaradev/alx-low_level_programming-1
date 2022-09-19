#include "main.h"

/**
 * puts2 - print every other character
 * @str: a string of characters
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	j -= 1;

	for (; i <= j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
