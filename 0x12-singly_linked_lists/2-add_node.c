#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - A function to add a new node to a linked list
 * @head: double pointer variable
 * @str: variable to add new string to the node
 *
 * Return: Returns the address of the new element
 * or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_str;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_str = malloc(sizeof(list_t));
	if (!new_str)
		return (NULL);

	new_str->str = strdup(str);
	new_str->len = len;
	new_str->next = (*head);
	(*head) = new_str;

	return (*head);
}
