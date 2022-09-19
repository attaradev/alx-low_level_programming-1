#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer parameter
 * @b: second integer parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;

	*a = n;
	*b = m;
}
