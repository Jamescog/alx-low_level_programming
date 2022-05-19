#include "lists.h"
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *add_node_end - adds a node at the end of a list
 *@head:pointer to head
 *@str:string to duplicate
 *Return:new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *last;
	list_t *new_node;

	last = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	return (new_node);
}
