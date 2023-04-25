#include "main.h"

/**
 * zero_func - a function to handle "%0" format specifier for integers
 * @buffer: location to write the formatted output to
 * @ap: va_list containing the integer to be formatted
 *
 * Return: length of resulting string
 */

int zero_func(char *buffer, va_list ap)
{
	int digit = va_arg(ap, int);
	int len = 0, temp, digit_value;

	if (digit < 0)
	{
		*buffer++ = '-';
		digit = -digit;
	len++;
	}

	else if (digit > 0)
	{
		*buffer++ = '0';
		len++;
	}
	else
	{
		*buffer++ = '0';
		len++;
		return (len);
	}

	temp = digit;

	while (temp)
	{
		temp /= 10;
		len++;
	}
	while (len > 1)
	{
		len--;
		temp /= 10;
		digit_value = temp % 10;
		*buffer++ = '0' + digit_value;
	}
	*buffer++ = '0' + digit % 10;

	return (len);
}
