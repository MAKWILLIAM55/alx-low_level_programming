#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	/* the next line prints tens digit*/
	for (tens = '0'; tens <= '9'; tens++)
	{


		/* the next line prints ones digit*/
		for (ones = '0'; ones <= '9'; ones++)
		{
			/* the next line eliminates repetition*/
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(tens);
				putchar(ones);
				/* next line adds comma and space*/
				if (!(ones == '9' && tens == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
