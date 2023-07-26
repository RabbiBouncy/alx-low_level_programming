#include "main.h"


/**
 * _atoi - concert a string to an integer
 * @s: input
 * Return: converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if ((result * 10) + (s[i] - '0') < result)
				return (sign == 1 ? INT_MAX : INT_MIN);
		result = (result * 10) + (s[i] - '0');
	}

	return (result * sign);
}
