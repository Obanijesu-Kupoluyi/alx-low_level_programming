#include <stdlib.h>
#include <stdio.h>
/**
 * main- Serves as the entry point for the program
 * Return: zero
 */
int main(void)
{
	int x;
	int y = '0';

	while (y <= '9')
	{
		putchar(y);
		y++;
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
