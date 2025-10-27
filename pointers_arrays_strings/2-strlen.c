#include "main.h"

/**
* _strlen - function that returns the length of a string.
 * @s: pointer to the character param.
 *
 * Description: This function that returns the length of a string.
 * string pointed to by s, not including the null terminator.
*
  * Return: the length of the string
*/
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return length;
}
