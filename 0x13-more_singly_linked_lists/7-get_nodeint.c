#include"lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a  linked lis
 *@index: index of the node
 *@head: head node
 *Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (i < index && current != NULL)
	{
	current = current->next;/*move pointer to the next node*/
		++i;/*increment index counter*/
	}

		if (current == NULL)
			return (NULL);

	else
	{
		return (current);/*if index is found, return node at that node*/
	}
}
