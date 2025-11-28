#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int res;
    char *filename;
    char *content = NULL;

    if (argc < 2)
    {
        printf("-1\n");
        return 0;
    }

    filename = argv[1];


    if (argc >= 3)
        content = argv[2];

    res = create_file(filename, content);

    printf("%d\n", res);

    return 0;
}