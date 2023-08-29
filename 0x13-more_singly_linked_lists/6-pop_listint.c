#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 * @head: Variable pointer to the first element
 *
 * Return: Returns the data inside the elments deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
