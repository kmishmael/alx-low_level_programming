#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to list_t struct
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int nodes;

	nodes = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
