#include <stdlib.h>
#include <stdio.h>
/**
 * main- This function serves as the executable program
 * Return: return value is zero, non-value if any error
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
