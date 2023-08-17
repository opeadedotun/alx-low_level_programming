#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function to print strings
 * @separator: Variable for the string to be printed
 * @n: Variable for the string to be passed
 * @... Variable that shows the number of strings to be printed
 *
 * Description: Not printed if separator is NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

		printf("\n");

		va_end(strings);
}
