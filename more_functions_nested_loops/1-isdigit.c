#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  function that checks for a digit (0 through 9).
 * @c: The character to check.
 *
* Description: This function that checks for a digit (0 through 9).
*
* Return: 1 if c is a digit Returns 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
