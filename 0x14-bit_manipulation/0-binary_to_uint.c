#include "main.h"
#include <string.h>

/**
 * binary_to_uint - Function to convert binary to unsigned int
 * @b: String varibale containing the binary number
 *
 * Return: REturns the ocnverted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	int length;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
