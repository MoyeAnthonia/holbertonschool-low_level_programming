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
int fd_from, fd_to;
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
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
exit(99);
}

/** read bytes and write*/
while ((r = read(fd_from, buffer, 1024)) > 0)
{
w = write(fd_to, buffer, r);
if (w == -1 || w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

/** check read error*/
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}
return (0);
}
