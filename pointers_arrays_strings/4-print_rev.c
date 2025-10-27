#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a string, in reverse, followed by a new line.
 * @s: to the string to be printed.
 *
 * Description: This function prints each character of a string
 * in reverse order, followed by a newline character.
*
  * Return: the string
*/
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
length++;
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
