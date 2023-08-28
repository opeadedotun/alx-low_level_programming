#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * a linked list to traverse
 * @h: Variable that links list to traverse
 *
 * Return: Returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
