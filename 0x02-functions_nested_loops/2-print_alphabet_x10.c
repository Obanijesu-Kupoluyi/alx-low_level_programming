#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: success
 */
void print_alphabet_x10(void)
{
	char n;
	int i;
	int count = 10;

	for (i = 0; i <= 10; i++)
	{
		while (i != count)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
				_putchar('\n');
			}
		}
	}
}
