#include "main.h"

/**
 * str_func - Handle the string format (%s)
 * @buffer: location the string should be written into
 * @ap: va_list to get the string to be handled
 *
 * Return: the length of the string written
 */

int str_func(char *buffer, va_list ap)
{
	int len = 0, i = 0;
	char *str = va_arg(ap, char *);

	while (str[i] != '\0')
	{
		len++;
		buffer[i] = str[i];
		i++;
	}

	return (len);
}
