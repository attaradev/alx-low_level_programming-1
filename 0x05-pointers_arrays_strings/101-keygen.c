#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generate random valid password
 *
 * Return: return th epassword
 */

int main(void)
{
	int pass;

	srand(time(NULL));

	pass = rand() % 100;

	return (pass);
}
