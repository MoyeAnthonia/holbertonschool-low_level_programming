#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
* int_index - function that searches for an integer in an array.
* @array: the array to print
* @size: number of element in the array
* @cmp: the pointer function to use
*
* Description: return 1 for integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (1);
}
return (-1);
}
