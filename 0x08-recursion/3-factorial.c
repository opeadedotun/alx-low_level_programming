#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: variable to return the factorial
 * Return: Returns the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
