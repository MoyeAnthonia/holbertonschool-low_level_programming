#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with basic attributes
 * @name: The name of the dog
 * @age: The age of the dog
*  @owner: The owner facilities the services.
 *
 * This structure stores information about a dog.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
