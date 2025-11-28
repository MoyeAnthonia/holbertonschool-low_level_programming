#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile -  function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: sixe of the letters
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t bytes_read, bytes_written;

if (filename == NULL)
return (0);

/**Open file and check for errors*/
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

/**allocate memory*/
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fd);
return (0);
};

/**read and write to standard output*/
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);
return (bytes_written);
}
