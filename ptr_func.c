#include "main.h"

/**
 * ptr_func - handle the pointer "%p" format specifier
 * @buffer: where the pointer value should be stored
 * @ap: a va_list to get the pointer value to be stored
 *
 * Return: length of the buffer used
 */

int ptr_func(char *buffer, va_list ap)
{
	int size;
	char *temp = NULL, *temp2;

	uintptr_t ptr = va_arg(ap, uintptr_t);

	size = base_conv(buffer, ptr, 16);


	temp = malloc(sizeof(char) * size + 2);

	if (temp == NULL)
		return (-1);
	temp2 = temp;

	*temp2++ = '0';
	*temp2++ = 'x';

	_strcpy(temp2, buffer);

	return (_strlen(_strcpy(buffer, temp)));
}

/**
 * _strcpy - make a copy of a string
 * @dest: where the copy should be stored
 * @src: string to be copied
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
