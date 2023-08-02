#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: variable used to calculate the square root
 *
 * Return: Return the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt_recursion(n, 0));
	}
}
/**
 * actual_sqrt_recursion - recursion to finf the natural square root
 *
 * @n: variable to calculate square root
 * @i: iterator
 *
 * Return: Returns the result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (actual_sqrt_recursion(n, i + 1));
	}
}
