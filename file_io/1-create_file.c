#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_textfile -  function that creates a file.
 * @filename: the name of the file
 * @text_content:  a NULL string to write to the file
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
int fd;
size_t len = 0;


if (filename == NULL)
return (0);

/**check length*/
if (text_content)
{
while(text_content[len])
len++;
}

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if(fd == -1)
return (-1);




close(fd);
return (-1);
}
