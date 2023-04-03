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
    unsigned int i = 0;

    while (head)
    {
        if (i == index)
        {
            delete = head[i];
            (head[i - 1])->next = head[i + 1];
            free(delete);
            return (1);
        }
        i++;
        head++;
    }
    return (-1);
}