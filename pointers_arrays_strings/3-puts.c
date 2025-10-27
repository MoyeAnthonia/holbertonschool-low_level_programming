#include "main.h"

/**
* puts - function that prints a string.
 * @str: pointer to read the value
 *
 * Description: Tfunction that prints a string.
 * string pointed to by s, not including the null terminator.
*
  * Return: the string
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
