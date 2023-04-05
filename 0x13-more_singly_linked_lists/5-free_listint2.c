#include"lists.h"

/**
 *free_listint - funtion that frees a list
 *@head: pointer to the head node
 *
 *Return: nothing to return
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;

}
