#include"lists.h"

/**
 *add_nodeint_end - funtion that adds a new node to the end of the list
 *@n: number of element
 *@head: head node of the list
 *Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;/*pointer to new node*/
	listint_t *tmp;/*temporary location*/

	(void)tmp;


	new = malloc(sizeof(listint_t));/*allocate memory to new node*/

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head = new;/*if list is blank, and new node*/
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
	return (*head);
}

