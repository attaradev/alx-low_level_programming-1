#include "main.h"

/**
 * main - main entry point
 * Description: Prints out the alphabets in lowercase followed by a new line
 * Return: Returns 0
 */
void print_alphabet(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
}
