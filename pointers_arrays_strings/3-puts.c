#include "main.h"

/**
* _puts - function that prints a string.
 * @str: pointer to read the value
 *
 * Description: This function prints each character of a string
 * followed by a new line, similar to the standard puts function.
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
