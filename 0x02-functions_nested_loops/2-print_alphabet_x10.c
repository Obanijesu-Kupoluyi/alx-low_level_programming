#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: success
 */
void print_alphabet_x10(void)
{
	char n;
	int y, z;

	for (n = 'a'; n <= 'z'; n++)
	{
		for (y = '0'; y <= 10; y++)
		{
			for (z = '0'; z <= y; z++)
			{
				putchar(n);
				putchar('\n');
			}
		}
	}
}
