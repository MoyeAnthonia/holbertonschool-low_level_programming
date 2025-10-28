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
	int i = 0, num = 0, negative = 0, result = 0, digit;

	while (s[i] != '\0')
	{
	if (s[i] == '-' && !result)
	{
		negative = !negative;
	}
	else if (s[i] == '+' && !result)
	{
	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
	digit = s[i] - '0';

		if (!negative && num > (INT_MAX - digit) / 10)
		return (INT_MAX);
		if (negative && num > (INT_MAX - digit) / 10)
		return (INT_MIN);

		num = num * 10 + digit;
		result = 1;
		}
	else if (result)
	{
		break;
	}

	i++;
	}

	if (negative)
	num = -num;

	return (num);
}
