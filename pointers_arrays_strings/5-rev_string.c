#include "main.h"
#include <string.h>
/**
 * rev_string - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 *
 * Description: This function print string
 * in reverse order, followed by a newline character.
  * Return: the string
*/
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
while (s[length] != '\0')
length++;
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
