#include "main.h"

/**
 * _strncat - concatenates  two strings but add inputed number of bytes
 *
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
