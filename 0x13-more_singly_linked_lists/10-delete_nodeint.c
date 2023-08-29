#include "lists.h"

/**
 * delete_nodeint_at_index - Function that delets a node in an index
 * @head: variable pointer to the first element
 * @index: variable index of the node to be deleted
 *
 * Return: Returns 1 if it suceeds or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}

	curr = temp->next;
	temp->next = curr->next;
	free(curr);

	return (1);
}

