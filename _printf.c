#include "main.h"

/**
 * _printf - Implementation of the printf function
 * @format: input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int skip, len;
	va_list ap;
	char *output, *buffer;
	int (*called_func)(char *, va_list);

	output = malloc(BUFFSIZE * sizeof(char));

	if (output == NULL)
		return (-1);

	buffer = output;

	va_start(ap, format);
	while (*format)
	{
		skip = 0;
		if (*format == '%')
		{
			format++;
			called_func = get_func(*format++);
			if (called_func != NULL)
			{
				skip = called_func(buffer, ap);
			}
			else
			{
				*buffer++ = '?';
				return (-1);
			}
			buffer = buffer + skip;
		}
		else
			*buffer++ = *format++;
		*buffer = '\0';
	}

	*buffer = '\0';
	va_end(ap);

	len =  _strlen(output);
	write(1, output, len);
	free(output);
	return (len);
}
