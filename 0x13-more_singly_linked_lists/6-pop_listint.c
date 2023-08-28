#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first elemen
 * Return: the head node’s data (n) or 0 if the linked list
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
{

return (0);
}
data = (*head)->n;
temp = (*head)->next;
free(head);
*head = temp;
return (data);
}

