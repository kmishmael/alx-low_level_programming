#include "lists.h"

/**
 * listint_len - number of elements
 * @h: listint_t pointer
 * Return: number of elements in a linked list
*/
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
