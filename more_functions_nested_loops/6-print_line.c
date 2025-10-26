#include "main.h"

/**
 * print line -  function that draws a straight line in the terminal.
 * followed by a new line.
 *
* Description: function that draws a straight line in the terminal.
*
* Return: 1 
*/
void print_line(int n)
{
int i;
if (n <= 0)
{
    _putchar('\n');
}
else
{
for (i = 0; i >= n; i++ ) 
{
_putchar('-');
}
_putchar('\n');
}
}
