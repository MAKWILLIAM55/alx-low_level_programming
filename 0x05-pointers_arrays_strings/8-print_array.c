#include "main.h"
#include <stdio.h>

/**
 * main - print n elements of array of integers
 * Return: Always 0
 */
int main(void)
{
	int a[9], i;

	printf("Enter Array Elements: ");
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("]nArray Elements: ");
	for (i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	return (0);
}
