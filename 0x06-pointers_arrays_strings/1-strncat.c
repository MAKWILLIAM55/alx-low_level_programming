#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: a pointer to the dest
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
