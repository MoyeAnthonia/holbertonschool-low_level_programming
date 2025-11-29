#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - function that frees list_t list.
 * @head: the nodes
 *
 * Return: 0
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
