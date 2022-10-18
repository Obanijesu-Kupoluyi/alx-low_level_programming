#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always zero
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
