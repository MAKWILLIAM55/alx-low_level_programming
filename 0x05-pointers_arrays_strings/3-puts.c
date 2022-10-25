#include "main.h"

/**
 * _puts - This functions puts
 * @str: a pointer to _puts function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
