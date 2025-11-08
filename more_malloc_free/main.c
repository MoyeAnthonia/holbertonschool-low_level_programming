#include "main.h"
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *result;

    result = string_nconcat("Best ", "School", 3);
    if (result == NULL)
        return (1);

    printf("%s\n", result);  /* Output: Best Sch */

    free(result);  /* Always free allocated memory */
    return (0);
}