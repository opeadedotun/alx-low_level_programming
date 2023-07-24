#include "main.h"
#include <stdio.h>

/**
 * swap_int - A funtion that swaps the value of two integers
 *
 * @a: temporary variable1
 * @b: temporary vaiable2
 * @temp_num: temporary variable3
 *
 * Return: Always 0;
 */
void swap_int(int *a, int *b)
{
	int temp_num = *a;
	*a = *b;
	*b = temp_num;
}
