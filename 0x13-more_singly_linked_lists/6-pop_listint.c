#include"lists.h"

/**
 *pop_listint - function that deletes the head node of a listint_t linked list,
 *@head: head node of the list
 *
 *Return: data of deleted node
 */

int pop_listint(listint_t **head)
{

	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
