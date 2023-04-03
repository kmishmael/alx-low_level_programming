#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer
 * Return: int
*/
int pop_listint(listint_t **head)
{
    listint *node;
    int data;

    if (head == NULL)
    {
        return (0)
    }
    node = *head;
    data = node->n;
    free(node);
    *head = (*head)->next;
    return (data);
}