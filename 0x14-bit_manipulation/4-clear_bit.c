#include "main.h"

/**
 * clear_bit - Function to set the value of a given bit to 0
 * @n: Variable pointer to the number to change
 * @index: Variable for indx of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) *8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
