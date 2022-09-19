#include "main.h"

/**
 * puts_half - print halfe of a string
 * @str: a string var to print half
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j, k;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	for (k = j; k < i; k++)
		_putchar(str[k]);

	_putchar('\n');
}
