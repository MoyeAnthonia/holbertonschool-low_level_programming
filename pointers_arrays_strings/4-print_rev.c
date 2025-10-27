#include "main.h"

/**
* print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: pointer to read the value
 *
 * Description: function that prints a string, in reverse, followed by a new line.
 * followed by a new line, similar to the standard puts function.
*
  * Return: the string
*/
void print_rev(char *s)
{
int length = strlen(str);
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
