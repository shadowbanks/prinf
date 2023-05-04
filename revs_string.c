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
	int len = 0, i = 0, j = 0;
	char null[6] = {"null"};

	if (str == NULL)
	{
		while (j < 6)
		{
			*buffer++ = null[j++];
		}
		return (6);
	}
	while (str[i] != '\0')
	{
		len++;
		buffer[i] = str[i];
		i++;
	}
	rev_string(buffer);

	return (len);
}
