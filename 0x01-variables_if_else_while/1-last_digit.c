#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints type of number
 *
 * Description: This programme prints the type of number
 *
 * Return: return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit;
	value = n % 10;
	if (value > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, value);
	}
	else if (value == 0)
	{
		printf("Last digit of %d i %d and is 0\n", n, value);
	}
	else if (value < 6 && value != 0)
	{
		print("Last digit of %d is %d is less than 6 and not 0\n", n, value);
	}
	return (0);
}
