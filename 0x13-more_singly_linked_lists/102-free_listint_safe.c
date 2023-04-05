#include"lists.h"

/**
 *free_listint_safe - frees memory
 *@h: double pointer to head of list
 *
 *Return:size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp, *current;

	if (h == NULL)
		return (0);

	current = *h;/*start from the head of the list*/

	while (current != NULL)
	{
		size++;
	if (current <= current->next)
	{
		free(current);
		*h = NULL;/*set head to null*/
		break;
	}
	temp = current;/*store current node in a temp variable*/
	current = current->next;/*move to next node*/
	free(temp);/*free current node*/
	}
	return (size);
}
