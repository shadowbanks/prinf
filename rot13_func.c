#include "main.h"

/**
 * rot13_func - rot13 encoding
 * @buffer: location the string should be saved
 * @ap: va_list holding string to encode
 *
 * Return: len of string written
 */

int rot13_func(char *buffer, va_list ap)
{
	int i = 0, j = 0;
	char *s = va_arg(ap, char *);

	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			buffer[j++] = s[i] + 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			buffer[j++] = s[i] - 13;
		else
			buffer[j++] = s[i];
		i++;
	}
	return (j);
}
