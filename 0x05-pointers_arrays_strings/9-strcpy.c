/**
 * _strcpy - copy one pointer to another
 * @dest: varied to be copied to
 * @src: variable to copy
 *
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	char *i = dest;

	while (*src)
		*dest++ = *src++;
	return (i);
}
