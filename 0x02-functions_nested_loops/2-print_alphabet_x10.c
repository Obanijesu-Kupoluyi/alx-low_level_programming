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

	for (n = 'a'; n <= 'z'; n++)
	{
		for (i = 0; i <= count; i++)
		{
			_putchar(n);
			_putchar('\n');
		}
	}
}
