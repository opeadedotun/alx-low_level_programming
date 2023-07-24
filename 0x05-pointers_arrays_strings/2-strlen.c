#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: pointer to string
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}
	return (string_length);
}
