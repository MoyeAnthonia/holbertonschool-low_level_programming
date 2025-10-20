#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0
 */

int main(void)
{
char myChar;

for (myChar = 'a'; myChar <= 'z'; myChar++) 
{
putchar(myChar);
}
putchar('\n'); 
return(0);
}
