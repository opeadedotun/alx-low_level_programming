#include "main.h"

/**
 * flip_bits - Function that counts then number of bits to change
 * @n: Variable for the first number
 * @m: Variable for the second number
 *
 * Return: REturns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
