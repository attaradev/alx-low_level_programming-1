#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: character to check
 *
 * Return: 1 if character is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
