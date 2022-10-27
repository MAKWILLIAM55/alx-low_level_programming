#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char u;

	int x;

	u = 'a';
	x = 0;
	while
		(x < 10)
		{
			putchar(x + '0');
			x++;
		}
	while
		(u <= 'f')
		{
			putchar(u);
			u++;
		}
	putchar('\n');
	return (0);
}
