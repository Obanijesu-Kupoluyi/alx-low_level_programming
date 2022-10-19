#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: entered value
 * Return: 1, -1or 0. Also +, -, or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	_putchar('0');
	return (0);
}
