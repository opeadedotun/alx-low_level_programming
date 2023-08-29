#include "lists.h"

/**
 * sum_listint -  Function that calculates the sum of all data
 * @head: Variable for fist node
 *
 * Return: Returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
