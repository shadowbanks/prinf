#include "main.h"

/**
 * space_func - a function to handle "% " format specifier for integers
 * @buffer: location to write the formatted output to
 * @ap: va_list containing the integer to be formatted
 *
 * Return: length of resulting string
 */

int space_func(char *buffer, va_list ap)
{
	int digit = va_arg(ap, int);
	int len = 0;

	if (digit < 0)
	{
		*buffer++ = '-';
		digit = -digit;
		len++;
	}
	else
	{
		*buffer++ = ' ';
		len++;
	}
	if (digit == 0)
	{
		*buffer++ = '0';
		len++;
	}
	else
	{
		temp = digit;
	while (temp)
	{
		temp /= 10;
		len++;
	}
	while (digit)
	{
		*buffer++ = '0' + (digit % 10);
		digit /= 10;
		len--;
	}
}
	return (len);
}
