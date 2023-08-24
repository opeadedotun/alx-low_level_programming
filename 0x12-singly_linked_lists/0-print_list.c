#include <stdio.h>
#include "lists.h"

/**
 * print_list - Function that prints a linked list and all its elements
 * @h: A pointer variable thatpoints to the list to print
 *
 * Return: Returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}

	return (x);
}
