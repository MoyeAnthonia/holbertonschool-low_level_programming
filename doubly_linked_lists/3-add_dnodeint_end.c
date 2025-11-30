#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the
 * end of a dlistint_t list.
 * @head: the nodes
 * @n: the number
 *
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;

/**allocate memory*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

/**Add new node*/
if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

/**fill node*/
temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
