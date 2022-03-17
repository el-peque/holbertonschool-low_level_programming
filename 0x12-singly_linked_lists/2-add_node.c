#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: list_t h
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t nhead;

	nhead = malloc(sizeof(**head));
	nhead.str = malloc(sizeof(str));
	nhead.str = str;
	nhead.len = sizeof(str) + 1;
	nhead.next = malloc(sizeof(head));
	nhead.next = head;
	return (nhead);
}
