#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Description: This function converts a string to an integer,
 * taking into account all leading '+' and '-' signs.
 * If there are no digits, it returns 0.
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] == '+')
sign *= 1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = (result * 10) + (s[i] - '0');
}
else if (started)
{
break;
}
i++;
}
return (result * sign);
}
