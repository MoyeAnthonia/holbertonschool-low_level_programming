#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
int firstNumbers, secondNumbers;
for (firstNumbers = 0; firstNumbers < 10; firstNumbers++)
{
    for (secondNumbers = firstNumbers + 1; secondNumbers < 10; secondNumbers++)
    {
        putchar(firstNumbers + '0');
        putchar(',');
        putchar(' ');
        putchar(secondNumbers + '0');
        if (firstNumbers != 8 || secondNumbers != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
}
putchar('\n');
return (0);

}
