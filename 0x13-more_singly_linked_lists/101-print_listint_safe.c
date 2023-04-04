#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list
 * @head: pointer to listint_t
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	int len;

	if (head == NULL)
	{
		exit(98);
	}
	while (head != NULL)
	{
		len = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		if (len > 0)
		{
			head = head->next;
		} else
		{
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
	}
	return (i);
}
