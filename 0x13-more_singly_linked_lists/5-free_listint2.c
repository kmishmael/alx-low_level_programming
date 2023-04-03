#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next;

	node = *head;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}
