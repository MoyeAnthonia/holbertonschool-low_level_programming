#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: The character to check.
 *
* Description: This function checks whether the character code
* passed as an argument corresponds to an uppercase letter (A–Z).
*
* Return: 1 if c is an uppercase letter, 0 otherwise.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
