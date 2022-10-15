#include <stdlib.h>
#include <stdio.h>
/**
 * main- Serves as the entry for the program
 * Return: return is zero, non-zero value if any error
 */
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
