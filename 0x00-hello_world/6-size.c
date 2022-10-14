#include <stdio.h>
/**
 * main- Serves as the entry point the program
 * Return: 0 if no error else return is a non-zero value
 */
int main(void)
{
	char charType;
	int integerType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %1d byte(s)\n", sizeof(charType));
	printf("Size of an int: %1d byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %1d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %1d byte(s)\n", sizeof(floatType));
	return (0);
}
