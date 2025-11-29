#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* main - copies content of a file to anothe file
* @argc: number of arguments
* @argv: argument list
*
* return 0
*/
int main(int argc, char *argv[])
{
int fd_from,
ssize_t r, w;
char buffer[1024];

/** check arguments numbers*/
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/**open file*/
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
}
