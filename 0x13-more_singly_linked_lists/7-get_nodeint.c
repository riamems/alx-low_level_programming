#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head : the first node in the linked list
 * @index: the index of the node, starting at 0
 * Return: node we are looking for, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
listint_t *temp = head;

while (temp && j < index)
{
temp = temp->next;
j++;
}
return (temp ? temp : NULL);
}
