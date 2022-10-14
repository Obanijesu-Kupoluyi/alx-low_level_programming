#include <stdlib.h>
#include <time.h>
/**
 * main - This function serves as the entry point of the program
 * Return: return value is 0, else non-zero value if any error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n > 0; n == 0; n < 0)
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else if (n < 0)
			printf("%d is negative\n", n);
	}
	return (0);
}
