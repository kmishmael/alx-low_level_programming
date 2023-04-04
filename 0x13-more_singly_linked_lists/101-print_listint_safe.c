#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list
 * @head: pointer to listint_t
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *current = head;
	const listint_t *prev = NULL;
	size_t c;

	current = head;

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
			exit(98);
	}
	return (i);
}
