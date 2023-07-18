#include <stdio.h>

/**
 * print_fibonacci_sequence - Generates and prints the Fibonacci sequence
 * up to the given number.
 * @n: The number of Fibonacci numbers to generate
 */
void print_fibonacci_sequence(int n)
{
	int a = 1, b = 2, next;
	int count = 2;

	printf("%d, %d", a, b);

	while (count < n)
	{
		next = a + b;
		printf(", %d", next);

		a = b;
		b = next;
		count++;
	}
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	print_fibonacci_sequence(98);
	printf("\n");

	return (0);
}
