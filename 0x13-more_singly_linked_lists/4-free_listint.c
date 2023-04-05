#include"lists.h"

/**
 *free_listint - funtion that frees a list
 *@head: pointer to the head node
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
