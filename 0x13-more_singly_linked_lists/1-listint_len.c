#include"lists.h"

/**
 *listint_len - returns the number of elements in listint list
 *@h: points to head of the list
 *
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
