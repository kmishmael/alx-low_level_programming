#include "lists.h"

/**
 * print_listint_safe - print a listint_t linked list
 * @head: pointer to listint_t
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int len;

	while (head != NULL)
	{
		len = head - head->next;
		i++;
		if (len > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		} else
		{
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			break;
		}
	}
	return (i);
}
