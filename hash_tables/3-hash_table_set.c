#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @key: is the key to hash
 * @ht: hash table
 * @value: value to store.
 *
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node, *temp;

if (!ht || !key || *key == '\0' || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];

/* check for key*/
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
return (temp->value ? 1 : 0);
}
temp = temp->next;
}

/**create new node if key does not exist*/
node = malloc(sizeof(hash_node_t));
if (!node)
return (0);

node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (0);
}

node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (0);
}

node->next = ht->array[index];
ht->array[index] = node;

return (1);
}
