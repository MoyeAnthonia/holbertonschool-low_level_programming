#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9.
 * followed by a new line.
 *
* Description: This function that prints the numbers, from 0 to 9
* Do not print 2 and 4
*
* Return: 1  that prints the numbers, from 0 to 9.
*/
void print_most_numbers(void)
{
int count;

for (count = 0; count <= 9; count++)
{
if (count == 2 || count == 4)
{
continue;
}
_putchar(count + '0');
}
_putchar('\n');
}
