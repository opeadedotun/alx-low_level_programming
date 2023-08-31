#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * @n: Variable for the number to search
 * @index: Variable for index of the bit
 *
 * Return: Returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
