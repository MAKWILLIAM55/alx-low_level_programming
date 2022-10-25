#include "main.h"
#include <stdio.h>

/**
 * main - print n elements of array of integers
 * @a: pointer
 * Return: Always 0
 */
int main(void)
{
	int arr[9];

	int *a;

	printf("\n\ Read and Print elements of an array: \n");
	printf("---------------------------------------\n");

	printf("0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 :\n");
	for (*a = 0; *a < 9; *a ++)
	{
		printf("element - %d : ", *a);
		scanf("%d", &arr[*a]);
	}

	printf("\nElements in array are: ");
	for (*a = 0; *a < 9; *a ++)
	{
		printf("%d ", arr[*a]);
	}
	printf("\n");
}
