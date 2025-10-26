#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, replacing multiples of 3 with
 *         "Fizz", multiples of 5 with "Buzz", and multiples of both
 *         with "FizzBuzz".
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (((a % 3) == 0) && ((a % 5) == 0))
{
printf("FizzBuzz");
}
else if ((a % 3) == 0)
{
printf("Fizz");
}
else if ((a % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
if (a != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
