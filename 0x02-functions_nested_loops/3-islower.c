#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * @c: the value entered
 * Return: 0 or 1
 */
int _islower(int c)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
