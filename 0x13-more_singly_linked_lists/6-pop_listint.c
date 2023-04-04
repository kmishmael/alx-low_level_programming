#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer
 * Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data;

	if (head == NULL)
	{
		return (0);
	}
	node = *head;
	if (node == NULL)
		return (0);
	data = node->n;
	*head = node->next;
	free(node);
	return (data);
}
