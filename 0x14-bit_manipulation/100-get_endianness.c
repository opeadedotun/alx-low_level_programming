#include "main.h"

/**
 * get_endianness - Function to check endianness
 *
 * Return: Returns the size of the endianness
 */
int get_endianness(void)
{
	unsigned int num;
	char *byte;

	num = 1;
	byte = (char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
