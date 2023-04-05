#include"lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to the head of the list
 *@n: value to be stored in the new node
 *@idx: index of the list where the new node should be added
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp = *head;

	new_node = malloc(sizeof(listint_t));/*allocate mem to new node*/

	if (new_node == NULL)
	return (NULL);

	new_node->n = n;/*set value of new node to n*/

	if (idx == 0)
	{
	new_node->next = *head;/*set next ptr of newnode to  current head*/
	*head = new_node;/*update head ptr to point to new node*/
	return (new_node);
	}

	/*traverse list to fing node at the index b4 insertion point*/
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	temp = temp->next;

	if (temp == NULL)/*if index is beyond range, return null*/
		return (NULL);

	new_node->next = temp->next;/*set nxtptr of new node to nxtptr of cur*/
	temp->next = new_node;/*nxtptr of current node to point to new node*/
	return (new_node);
}
