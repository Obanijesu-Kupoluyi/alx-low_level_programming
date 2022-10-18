#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: Always zero
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
