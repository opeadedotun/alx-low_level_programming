#include "main.h"

/**
 * print_rev - A funtion that prints in reverse
 * @s: the string to print
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
