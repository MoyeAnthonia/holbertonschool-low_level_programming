#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * @void: The character to check.
 *
* Description: This function that prints the numbers, from 0 to 9
* function that prints the numbers, from 0 to 9.
*
* Return: 1  that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
int count;

for (count = 0; count <= 9; count++)
{
_putchar(count + '0');
}
_putchar('\n');
}
