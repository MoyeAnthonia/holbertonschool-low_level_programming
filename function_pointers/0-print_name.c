#include "function_pointers.h"
#include <stdio.h>

/**
 * _print_name - function that prints a name.
 * @name: pointer to name
 *
 * Return: 0 always
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
f(name);
}
