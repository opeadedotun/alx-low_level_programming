#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the begining of a linked list
 * @head: variable pointer to the first node in the list
 * @n: Variable data to insert into the new node
 *
 * Return: Return the ointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
