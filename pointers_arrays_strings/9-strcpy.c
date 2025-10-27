#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Description: This function copies the string from src to dest,
 * including the terminating null byte (\0).
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
