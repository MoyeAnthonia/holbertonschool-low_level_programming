#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct
 * @d: The struct of the dog
 *
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, len;

d = malloc(sizeof(dog_t));
if (!d)
return (NULL);
	
if (name)
{
for (len = 0; name[len]; len++);
d->name = malloc(len + 1);
if (!d->name)
{
free(d);
return (NULL);
}
for (i = 0; i <= len; i++)
d->name[i] = name[i];
}
else
d->name = NULL;
if (owner)
{
for (len = 0; owner[len]; len++);
d->owner = malloc(len + 1);
if (!d->owner)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i <= len; i++)
d->owner[i] = owner[i];
}
else
d->owner = NULL;
d->age = age;
return (d);
}
