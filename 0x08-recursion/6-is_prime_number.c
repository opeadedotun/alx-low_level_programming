#include "main.h"
int actual_prime(int n, int i);

/**
 * is_prime_number - function to check if an integer is a prime number or not
 * @n: variable to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, n - 1));
	}
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: variable to evaluate
 * @i: iteratir
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	else
	{
		return (actual_prime(n, i - 1));
	}
}
