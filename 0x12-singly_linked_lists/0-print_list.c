#include"lists.h"


/**
 *print_list - prints all elements of size_t
 *@h: singllly linked list
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t apple;

	apple = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		apple++;
	}
	return(apple);
}
