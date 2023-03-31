#include"lists.h"
/**
 *free_list - frees a list
 *@head: head of the string
 *Return: nothing to be returned
 */
void free_list(list_t *head)
{
	list_t *existing;

	while ((existing = head) != NULL)
	{
		head = head->next;
		free(existing->str);
		free(existing);
	}

}
