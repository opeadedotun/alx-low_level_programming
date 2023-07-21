#include "main.h"
/**
 * _isupper - funtion to check for uppercase
 * @c: Variable text
 * Return: (1) if true and (0) if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
