#include"lists.h"

/**
 *reverse_listint - reverses a list
 *@head: pointer to the head of the list
 *
 *
 *Return: ptr to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;/*ptrs to prv &nxt nodes*/
	listint_t *current = *head;/*ptr to current code*/

	while (current != NULL)
		{
		next = current->next;/*set nxt to next node*/
		current->next = prev;/*set next ptr of curr node to prev node*/
		prev = current; /*set prev to current node*/
		current = next; /*set current to next node*/
		}
	*head = prev;/*set head ptr to the last node*/

	return (*head);
}
