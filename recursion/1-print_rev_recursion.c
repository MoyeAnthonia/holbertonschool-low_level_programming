#include "main.h"

/**
 * _print_rev_recursion - function that prints a  reversed string.
 * @s: string to print.
 *
 * Description: function that prints a string in reverse.
 * followed by a new line.
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;

_print_rev_recursion(s + 1);
_putchar(*s);
}
