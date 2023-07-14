#include <stdio.h>
/**
 * main - Entry point
 * Description: Code to print aphabets in lowecase
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
