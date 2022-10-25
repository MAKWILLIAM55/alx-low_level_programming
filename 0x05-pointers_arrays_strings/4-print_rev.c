#include "main.h"
#include <string.h>

/**
 * print_rev - To print a string in reverse order
 * @s: The string to be printed in reverse
 */

void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
