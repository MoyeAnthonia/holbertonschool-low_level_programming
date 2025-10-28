#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: pointer to string
 *
 * Return: integer value
 */
int _atoi(char *s)
{
int i = 0, sign = 1, result = 0, digit, started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
digit = s[i] - '0';
if (sign == 1 && (result > (INT_MAX - digit) / 10))
return (INT_MAX);
if (sign == -1 && (result > (INT_MIN + digit) / -10))
return (INT_MIN);
result = result * 10 + digit;
}
else if (started)
break;
i++;
}
return (result * sign);
}
