#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This function serves as the executable program
 * Return: return is zero, non-zero value if any error
 */
int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n);

	x = n % 10;
	{
		if (x > 5)
			printf(" %d and is greater than 5\n", x);
		else if (x == 0)
			printf(" %d and is 0\n", x);
		else if ((x < 6) && (x != 0))
			printf(" %d and is less than 6 and not 0\n", x);
	}
	return (0);
}

