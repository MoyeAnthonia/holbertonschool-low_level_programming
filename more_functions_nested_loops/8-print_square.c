#include "main.h"

/**
 * print_square -  function that  prints a square in the terminal.
 * @n: The number of times the character # should be printed.
 *
* Description: If n is 0 or less, prints only a newline.
*
*
*/
void print_square(int size)
{
int i;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
