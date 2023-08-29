#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the node at a certain index
 * @head: Variable for first node
 * @index: variable for index node return
 *
 * Return: Returns the prointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
