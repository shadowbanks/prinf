#include  "main.h"

/**
 * hash_func - a function to handle "%#" format specifier for unsigned integers
 * @buffer: location to write the formatted output to
 * @ap: va_list containing the integer to be formatted
 *
 * Return: length of resulting string
 */

int hash_func(char *buffer, va_list ap)
	{
		unsigned int digit = va_arg(ap, unsigned int);
		int len = 0, i;
		int hex_len;
		char hex_str;

	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}
	else
	{
		hex_str[16];

		hex_len = base_conv(hex_str, digit, 16);

		*buffer++ = '0';
		*buffer++ = 'x';

	len += 2;

	for (i = 0; i < hex_len; i++)
	{
		buffer[i] = hex_str[hex_len - i - 1];
	}
		len += hex_len;
	}
	return (len);
}
