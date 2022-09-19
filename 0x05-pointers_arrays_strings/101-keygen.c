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
	char password[100];
	int randNum, num, i;

	num = 0;
	i = 0;

	srand(time(NULL));

	while (num < 2645)
	{
		randNum = random() % 127;
		if (randNum > 32)
		{
			password[i++] = randNum;
			num += randNum;
		}
	}
	password[i++] = (2772 - num);
	password[i] = '\0';
	printf("%s\n", password);

	return (0);
}
