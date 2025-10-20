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

for (myNumbers = 0; myNumbers < 10; myNumbers++)
{
putchar(myNumbers + '0');
}
putchar('\n');
return (0);
}
