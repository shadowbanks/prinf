#include "main.h"

/**
 * u_func - a function to handle "%u"
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int u_func(char *buffer, va_list ap)
{
	unsigned int digit = va_arg(ap, int);
	int len = 0;
	int temp;

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}

	else
	{
		temp = digit;

	while (temp)
	{
		temp /= 10;
		len++;
	}

	}

	while (digit)
	{
		buffer[len - 1] = '0' + (digit % 10);
		digit /= 10;
		len--;
	}

	buffer[len] = '\0';

	return (len);
}
