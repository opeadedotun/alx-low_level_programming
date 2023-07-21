#include <unistd.h>
/**
 * _putchar - Implementation of _putchar function
 *
 * Return: system call to output character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
