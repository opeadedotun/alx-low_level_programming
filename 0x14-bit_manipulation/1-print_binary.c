#include "main.h"

/**
 * print_binary - Function that prints the bu=inary of a decimal number
 * @n: Variable holding the number to print
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
