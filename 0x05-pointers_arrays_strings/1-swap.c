#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two numbers
 * @a: first pointer
 * @b: second pointer
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int constant;

	constant = *a;
	*a = *b;
	*b = constant;
}
