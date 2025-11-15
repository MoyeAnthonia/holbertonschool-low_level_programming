#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
* This file contains the functions used for the program
* op_add - Function that returns the sum of a and b
* op_sub - Function that returns the difference of a and b
* op_mul - Function that returns the products of a and b
* op_div - Function that returns the division of a and b
* op_mod - Function that returns modular of the divison of a and b
* @a: first value
* @b: second value
*
* return results
*/
int op_add(int a, int b)
{
return a + b;
}
int op_sub(int a, int b)
{
return a - b;
}
int op_mul(int a, int b)
{
return a * b;
}
int op_div(int a, int b)
{
return a / b;
}
int op_mod(int a, int b)
{
return a % b;
}
