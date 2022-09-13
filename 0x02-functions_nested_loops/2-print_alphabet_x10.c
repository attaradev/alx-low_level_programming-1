#include "main.h"

/**
 *
 * print_alphabet_x10 - Outputs values to the standard output
 *
 * Description: Prints out the alphabets 10 times in lower case
 *
 * Return: returns 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
