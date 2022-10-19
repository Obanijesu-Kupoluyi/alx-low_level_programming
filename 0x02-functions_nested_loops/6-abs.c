#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point#
 * @n: entered value
 * Return: int n
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (n);
}
