#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function returns sum
 * of a dlistint list.
 * @head: the nodes
 *
 * Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while(head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
