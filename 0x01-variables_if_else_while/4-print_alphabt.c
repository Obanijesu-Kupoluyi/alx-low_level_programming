#include <stdlib.h>
#include <stdio.h>
/**
 * main- Serves as the entry of the program
 * Return: return is zero, non-zero value if any error
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
