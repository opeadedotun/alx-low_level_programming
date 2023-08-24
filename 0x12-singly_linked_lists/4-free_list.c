#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees a linked list
 * @head: Variable to be listed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
