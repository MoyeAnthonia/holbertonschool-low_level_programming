#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: the nodes
 * @str: the string
 *
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *new_node, *temp;
char *dup_str;
unsigned int len = 0;

dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);

while (str[len])
len++;

/**allocate memory*/
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}

/**fill node*/
new_node->str = dup_str;
new_node->len = len;
new_node->next = NULL;

if (*head == NULL)
{
*head = new_node;
return (new_node);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
