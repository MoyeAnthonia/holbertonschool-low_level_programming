#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function that delete a hash table.
 * @ht: hash table
 *
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node, *temp;

if (!ht)
return;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
temp = node->next;
free(node->key);
free(node->value);
free(node);
node = temp;
}
}
free(ht->array);
free(ht);
}
