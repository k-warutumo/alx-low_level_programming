#include "lists.h"

/**
 *add_node_end - adds node to the end of the list
 *@head: first node of the list
 *@str: string to add to new node
 *Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;

	if (!head || !str)
	return (NULL);

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
	free(new_node);
	return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
	{
	*head = new_node;
	return (new_node);
	}

	temp_node = *head;
	while (temp_node->next)
	temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
