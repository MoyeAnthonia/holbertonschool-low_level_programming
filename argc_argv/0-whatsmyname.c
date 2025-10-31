#include "main.h"
#include <stdio.h>

/**
* main - program that prints its name, followed by a new line.
 * @argc: number of commands
 * @argv: array of commands
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[1]);
}
return (0);
}
