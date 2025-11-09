#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that concatenates two strings.
 * @min: the first array.
 * @max: the second array.
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
int *arr;
int i, size;

if (min > max)
return (NULL);
size = max - min + 1;

arr = malloc(size *sizeof(int));
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
