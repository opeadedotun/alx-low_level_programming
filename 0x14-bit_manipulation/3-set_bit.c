#include "main.h"

/**
 * set_bit - Function that returns the value of a bit
 * @n: Variable for the number to search
 * @index: Varian=ble for the index of the bit
 *
 * Return: Returns the value of the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
