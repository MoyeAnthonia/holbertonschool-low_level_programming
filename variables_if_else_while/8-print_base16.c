#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
int myNumbers;

for (myNumbers = 0; myNumbers < 16; myNumbers++)
{
if (myNumbers < 10)
{
putchar(myNumbers + '0');
}
else
{
putchar(myNumbers - 10 + 'a');
}
}
putchar('\n');
return (0);
}
