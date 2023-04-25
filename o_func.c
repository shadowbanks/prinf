#include "main.h"

/**
 * o_func - a function to handle "%o" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 * Return: length of resulting string
 */

int o_func(char *buffer, va_list ap)
{
	unsigned long int digit = va_arg(ap, int), len = 0, temp;

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}

	temp = digit;
	while (temp)
	{
		temp /= 8;
		len++;
	}
	while (digit)
	{
		buffer[len - 1] = '0' + (digit % 8);
		digit /= 8;
		len--;
	}

	return (len);
}
