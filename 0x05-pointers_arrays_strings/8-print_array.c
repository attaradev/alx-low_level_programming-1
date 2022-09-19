#include "main.h"
#include <stdio.h>

/**
 * print_array - print the elements of an array
 * @a: an array of characters
 * @n: number of arrays
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j < n - 1)
			printf(", ");
	}
	printf("\n");
}
