#include "main.h"

/**
 * getlen - get the length of a stringvariable
 * @var: the variable to get length
 *
 * Return: length of the variable
 */

int getlen(char *var)
{
	int j = 0;

	while (*(var + 1) != '\0')
		j++;

	return (j);
}


/**
 * rev_string - reverse a string
 * @s: a string variable to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len;
	char temp, n;

	len = getlen(s) - 1;
	i = 0;

	while (i < len)
	{
		temp = s[i];
		n = s[len];
		s[++i] = temp;
		s[len--] = n;
	}
}
