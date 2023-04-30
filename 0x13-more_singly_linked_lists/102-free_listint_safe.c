#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	const listint_t *next = head;
	size_t c;

	current = *h;
	if (h == NULL || *h == NULL)
		return;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		i++;
		current = current->next;
		prev = head;
		c = 0;

		while (c < i)
		{
			if (current == prev)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (i);
			}
			prev = prev->next;
			c++;
		}
		if (!head)
			return;
	}
	return (i);
}
