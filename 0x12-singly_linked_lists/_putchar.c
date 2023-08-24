#include <unistd.h>

/**
 * _putchr - function that writes character c to stdout
 * @c: The character to print
 *
 * Return; on success 1
 * On error, -1 is returnd, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
