#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h : the linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t node_count = 0;

while (h)
{
h = h->next;
node_count++;
}

return (node_count);
}
