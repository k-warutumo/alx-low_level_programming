#include"lists.h"

/**
 *sum_listint - function that returns the sum of all the data (n) of a list
 *@head: pointer to head of the list
 *
 *
 *Return:  sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
