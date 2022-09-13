#include "main.h"

/**
 * print_to_98 - Entry point for programme
 *
 * @n: number to start from
 *
 * Description: This function prints all natural numbers
 *
 * Return: Returns void
 */
void print_to_98(int n)
{
	int a;

	for (a = n; a < 98; a++)
	{
		_putchar("%a, a", a);
	}
	for (a = n; a > 98; a--)
	{
		_putchar("%a, ", a);
	}
	_putchar("98\n");
}
