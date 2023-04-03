#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to listint_t
 * @n: int
 * Return:listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (last);
}
