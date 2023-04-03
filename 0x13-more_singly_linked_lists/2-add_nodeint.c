#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: pointer to pointer to listint_t
 * @n: int
 * Return: the address of the new elements
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *newNode;

    newNode = malloc(sizeof(listint_t));
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = n;
    newNode->next = *head;
    *head = newNode;
    return (*head);
}