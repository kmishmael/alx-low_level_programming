#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *link = head;
	list_t *next;

	while (link != NULL)
	{
		next = link->next;
		free(link->str);
		free(link);
		link = next;
	}
	head = NULL;
}
