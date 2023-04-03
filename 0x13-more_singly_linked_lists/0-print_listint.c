#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer to listint_t
 * Return: size_t, number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
