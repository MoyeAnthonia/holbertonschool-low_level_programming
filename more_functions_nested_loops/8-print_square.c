#include "main.h"

/**
 * print_square -  function that  prints a square in the terminal.
 * @size: The number of times the character # should be printed.
 *
* Description: If n is 0 or less, prints only a newline.
*
*
*/
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
