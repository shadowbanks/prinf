#include "main.h"

/**
 * _printf - Implementation of the printf function
 * @format: input string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int skip;
	va_list ap;
	char *output, *buffer;

	if (format == NULL)
		return (-1);

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
			if (*format == '\0')
				skip = 0;
			else
			{
				skip = call_func(*format, buffer, ap);
				skip = (skip == -1) ? (buffer[1] = *format, 2) : 1;
				format++;
			}
			buffer = buffer + skip;
		}
		else
			*buffer++ = *format++;
		*buffer = '\0';
	}

	*buffer = '\0';
	va_end(ap);
	write(1, output, _strlen(output));
	free(output);
	return (_strlen(output));
}
