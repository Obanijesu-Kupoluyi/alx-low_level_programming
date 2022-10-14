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

	printf("size of char: %1d bytes\n", sizeof(charType));
	printf("size of int: %1d bytes\n", sizeof(integerType));
	printf("size of long int: %1d bytes\n", sizeof(longType));
	printf("size of long long int: %1d bytes\n", sizeof(longlongType));
	printf("size of float: %1d bytes\n", sizeof(floatType));
	return (0);
}
