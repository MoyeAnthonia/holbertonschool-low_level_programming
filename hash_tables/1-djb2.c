#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: string for the hash value.
 *
 * Return: pointer
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int result = 5381;
int letter;

while (*str != '\0')
{
letter = *str;
result = (result  * 33) + letter;
str++;
}
return (result);
}
