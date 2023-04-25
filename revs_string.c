#include "main.h"

/**
 *revs_string - prints a reversed string
 * @buffer: location the string should be saved
 * @ap: va_list holding string to encode
 *
 * Return: len of string written
 */

int revs_string(char *buffer, va_list ap)
{
	char *str = va_arg(ap, char*);
	int len = 0;
	int str_len = 0;
	char c;

	if (str == NULL)
	{
	str = "(null)";
	}

	while (str[str_len])
	{
		str_len++;
	}
	for (int i = 0; i < str_len / 2; i++)
	{
		c = str[i];
		str[i] = str[str_len - 1 - i];
		str[str_len - 1 - i] = c;
	}
	while (*str)
	{
		*buffer++ = *str++;
		len++;
	}
	*buffer = '\0';
return (len);
}
