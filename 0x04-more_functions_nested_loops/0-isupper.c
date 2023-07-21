#include "main.h"
/**
 * _isupper - funtion to check for uppercase
 * @c: Variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
