#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using the function provided
 * @name: the name to print
 * @f: the function to use for printing
 *
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
f(name);
}
