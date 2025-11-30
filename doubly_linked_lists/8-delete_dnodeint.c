#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes
 * a dlistint list.
 * @head: the nodes
 * @index: index of nodes.
 *
 * Return: 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);
 /**delete head first*/
if (index == 0)
{
*head = temp->next;
if (*head != NULL)
(*head)->prev = NULL;

free(temp);
return (1);
}

while (temp != NULL && i < index)
{
temp = temp->next;
i++;
}

if (temp == NULL)
return -1;

if (temp->prev != NULL)
temp->prev->next = temp->prev;

free(temp);
return (1);
}
