#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 *
 * Description: This function prints one character out of two
 * from a given string, starting with the first character,
 * followed by a new line.
*/
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
