#include <stdio.h>

/**
 * main: Prints a string to the standard output
 * return: Returns 0
 */
int main(void)
{
	int t = "_putchar";
	
	while(t != '\0')
	{
		putchar(t);
		t = t+1;
	}	

	return (0);
}
