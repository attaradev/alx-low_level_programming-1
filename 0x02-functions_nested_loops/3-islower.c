#include "main.h"

/**
 * _islower(int c) - Entry point for programme
 *
 * Description: Checks for lower case character and returns 1 if true else 0
 *
 * Return: Return 1
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
