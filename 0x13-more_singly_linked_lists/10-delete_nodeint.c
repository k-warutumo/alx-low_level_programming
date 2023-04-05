#include"lists.h"

/**
 *delete_nodeint_at_index - deletes node and a certain index
 *@head: pointer to head node of the list
 *@index: index of node to be deleted
 *
 *Return: 1 is succesful, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)/*check if list is empty*/
		return (-1);

	if (index == 0)
	{
		temp = *head; /*set a temp ptr to 1st node*/
		*head = (*head)->next;/*update head ptr to point to nxt node*/
		free(temp);/*free mem allocated for 1st node*/
		return (1);
	}
	temp = *head;/*set a temp pointer to 1st node*/

	for (i = 0; temp != NULL && i < index; i++)
	{
		prev = temp;/*set a ptr to current node*/
		temp = temp->next;/*set ptr to next node*/
	}
	if (temp == NULL)/*check if index is out of range*/
		return (-1);

	prev->next = temp->next;/*update nxtptr of prev node to point to nxt.*/
	/* node after the node to be deleted*/
	free(temp);

	return (1);
}

