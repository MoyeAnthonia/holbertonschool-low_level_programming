#include "main.h"
#include <stdio.h>
#include <math.h>

/**
* _pow_recursion - function that returns the value of x
* raised to the power of y
 * @x: the number for base
 * @y: the number for exponent
 *
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1.0);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1.0 / (x * _pow_recursion(x, -y - 1)));
}
}
}
