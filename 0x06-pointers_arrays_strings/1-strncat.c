#include "main.h"

/**
 * _strcat - joins two strings with n bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int j;
	int K;

	i = 0;
	while (dest[i] != '\0')
	{
		j++;

	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
