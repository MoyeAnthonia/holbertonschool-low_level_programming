#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - function that frees dlistint list.
 * @head: the nodes
 *
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
