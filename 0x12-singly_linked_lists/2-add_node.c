#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to pointer
 * @str: str to be added
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	if (str == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newStr = strdup(str);
	if (newStr == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newStr);
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
