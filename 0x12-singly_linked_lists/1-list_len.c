#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * in a linked list
 * @h: pointer variable
 *
 * Return: Returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
