#include "main.h"

/**
 * X_func - a function to handle "%x" specifier
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int X_func(char *buffer, va_list ap)
{
	int i = 0, len;

	len = base_conv(buffer, va_arg(ap, unsigned int), 16);

	while (i < len)
	{
		if (buffer[i] >= 'a' && buffer[i] <= 'f')
			buffer[i] = buffer[i] - 32;

		i++;
	}
	return (len);
}
