#include"lists.h"

/**
 *add_nodeint - adds new node at begining of list
 *@head: pointer to the the head of the list
 *@n: value to be added to new node
 *Return: address of new element, NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
			return (NULL);

			new_node->n;
			new_node->next = *head;
			*head = new_node;

	return (new_node);
}
