#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer listint_t
 * @idx: unsigned int
 * @n: int
 * Return: pointer to listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	unsigned int i = 0;
	listint_t *node = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL || head == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (node && i < idx)
	{
		if (i == idx - 1)
		{
			newNode->next = node->next;
			node->next = newNode;
			return (newNode);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
