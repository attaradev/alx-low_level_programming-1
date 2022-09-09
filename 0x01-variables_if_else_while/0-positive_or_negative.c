#include <stdio.h>
#include <time.h>

/**
 * main - Prints whether a number is positive or negative
 *
 * Description: This programme prints whether a number is positive or negetive
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if(a == 0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}
	return (0);
}
