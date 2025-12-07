#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key to hash
 * @size: size of the array.
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;

hash_value = hash_djb2(key);
return (hash_value % size);
}
