#include <stdio.h>

/**
 * main: Prints the alphabets in lowercase
 * return: Return 0
 */

void print_alphabet(void)
{
	char ch;
	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
