#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function returns nth node
 * of a dlistint list.
 * @head: the nodes
 * @index: index of nodes
 *
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while(head != NULL)
{
if (i == index)
return (head);
head = head->next;
i++;
}
return (NULL);
}
