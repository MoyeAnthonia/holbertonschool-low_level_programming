#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_primary = 0, sum_secondary = 0;
for (i = 0; i < size; i++)
{
sum_primary += *(a + i * size + i);           /* Primary diagonal */
sum_secondary += *(a + i * size + (size - 1 - i)); /* Secondary diagonal */
}
printf("%d, %d\n", sum_primary, sum_secondary);
}
