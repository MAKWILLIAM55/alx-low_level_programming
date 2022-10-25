#include "main.h"
#include <stdio.h>

/**
 * main - print n elements of array of integers
 * @a: pointer
 * Return: Always 0
 */
int main(void)
{
	int array[9];

	int i;

	printf("\n\Read and Print elements of an array:\n");
	printf("---------------------------------------\n");

	printf("0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 :\n");
	for (i = 0; i < 9; i++)
	{
		printf("element - %d : ", i);
		scanf("%d", &arr[i]);
	}

	printf("\nElements in array are: ");
	for (1 = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
