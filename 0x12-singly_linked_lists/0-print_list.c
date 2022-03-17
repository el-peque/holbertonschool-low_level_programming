#include "lists.h"
#include "_putchar.c"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t h
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	char nil[] = "[0] (nil)\n";
	unsigned int n = 0;
	int nodes = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		while (nil[n])
		{
			_putchar(nil[n]);
			n++;
		}
	}
	else
	{
		_putchar('[');
		_putchar(h->len + '0');
		_putchar(']');
		_putchar(' ');
		for (n = 0; n < h->len; n++)
		{
			_putchar(h->str[n]);
		}
		_putchar('\n');
	}
	nodes++;
	h = h->next;
	}
	return (nodes);
}
