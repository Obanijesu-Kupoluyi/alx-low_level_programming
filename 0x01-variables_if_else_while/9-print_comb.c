#include <stdlib.h>
#include <stdio.h>
/**
 * main- Serves as the entry point of the program
 * Return: zero
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
