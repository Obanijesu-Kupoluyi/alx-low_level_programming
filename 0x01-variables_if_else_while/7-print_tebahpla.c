#include <stdlib.h>
#include <stdio.h>
/**
 * main- Serves as the entry fo the program
 * Return: zero
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
