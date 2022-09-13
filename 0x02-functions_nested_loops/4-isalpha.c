#include "main.h"

/**
 * _isalpha - Entry point for programme
 *
 * @c: Character to check
 *
 * Description: Checks for alphabetic characters
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c>= 65 && c <= 90));
}
