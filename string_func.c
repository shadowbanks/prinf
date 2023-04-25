#include "main.h"

/**
 * string_func - a function to handle "%s" for no printable characters
 * @buffer: location to write the formated output to
 * @ap: var_list. containing the integer to be format
 *
 * Return: length of resulting string
 */

int string_func(char *buffer, va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = 0;

	while (*str)
	{
	if (*str > 31 && *str < 127)
	{
		*buffer++ = *str++;
		len++;
	}
	else
	{
		*buffer++ = '\\';
		*buffer++ = 'x';
		*buffer++ = "0123456789ABCDEF"[(*str >> 4) & 0xF];
		*buffer++ = "0123456789ABCDEF"[*str & 0xF];
	str++;
		len += 4;
	}
	}

	*buffer = '\0';

	return (len);
}
