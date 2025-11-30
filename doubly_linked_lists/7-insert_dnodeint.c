#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>
/**
 * insert_dnodeint_at_index - function inserts a new node
 * at a given position.
 * @h: the head pointer
 * @idx: the index of the nodes
 * @n: the value
 *
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp = *h;
unsigned int i = 0;

if (h == NULL)
return (NULL);

/**add at head*/
if (idx == 0)
return (add_dnodeint(h, n));

while (temp != NULL && i < idx - 1)
{
temp = temp->next;
i++;
}
if (temp == NULL)
return (NULL);

/**insert at end*/
if (temp->next == NULL)
return (add_dnodeint_end(h, n));

/**assign memory*/
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;

temp->next->prev = new_node;
temp->next = new_node;

return (new_node);
}
