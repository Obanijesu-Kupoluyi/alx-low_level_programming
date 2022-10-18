#include <unistd.h>
/**
 * My first function
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
