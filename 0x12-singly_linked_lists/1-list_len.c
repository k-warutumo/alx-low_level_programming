#include"lists.h"

/**
 *list_len - counts the no of elements in the list
 *@h: linked list
 *Return: number of elements in the list
 *
 *
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;/*initialize count to zero*/

	while (h != NULL)
	{
		count++;/*increment count for each node*/
		h->next;/*move to next node*/
	}
	
	return (count);
}
