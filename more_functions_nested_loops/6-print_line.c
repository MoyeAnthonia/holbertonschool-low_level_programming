#include "main.h"

/**
 * print line -  function that draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 *
*Description: If n is 0 or less, prints only a newline.
*
*/
void print_line(int n)
{
int i;
if (n <= 0 || n == 0)
{
_putchar('\n');
}
else
{
for (i = 0; i >= n; i++)
{
_putchar('-');
}
_putchar('\n');
}
}
