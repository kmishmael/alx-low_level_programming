#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer
 * @index: unsigned int
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	listint_t *node = *head;
	unsigned int i = 0;
	if (node == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index - 1)
		{
			delete = node->next;
			node->next = delete->next;
			free(delete);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
