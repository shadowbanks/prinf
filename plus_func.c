#include "main.h"

/**
 * plus_func - a function to handle "%+" format specifier
 * @buffer: location to write the formatted output to
 * @ap: va_list containing the integer to be formatted
 *
 * Return: length of resulting string
 */

int plus_func(char *buffer, va_list ap)
{
	int digit = va_arg(ap, int);
	int len = 0;
	int temp;

	if (digit < 0 || digit >= 0)
	{
		*buffer++ = digit < 0 ? '-' : '+';
		digit = digit < 0 ? -digit : digit;
		len++;
	}
	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}
	else
	{
	while (temp)
	{
		temp /= 10;
		len++;
	}
	while (digit)
	{
		buffer[len - 1] = '0' + (digit % 10);
		digit /= 10;
		len--;
	}
	}
	return (len);
}
