#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
