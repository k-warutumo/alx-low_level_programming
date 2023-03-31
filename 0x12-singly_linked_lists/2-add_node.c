#include"lists.h"

/**
 *add_node - addsnew node to beginning of the list
 *@str: string
 *@head: first node of the list
 *Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	/* allocate memory for new node*/
	list_t *new_node = malloc(sizeof(list_t));

	/*check if malloc failed*/
	if (new_node == NULL)
	{
		return ("NULL");
	}

	/*copy input string to new node*/
	new_node->str = strdup(str);
	/*set the lenght of string in new node*/
	new_node->len = strlen(str);
	/*set pointer on new node to current head*/
	new_node->next = *head;
	*head = new_node; /*set head tr to new node*/

	return (new_node);
}
