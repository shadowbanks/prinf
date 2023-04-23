#include "main.h"

/**
 * pct_func - Handle % i.e "%%"
 * @buffer: location to write % into
 * @ap: not doing anything actually (0_0)'
 *
 * Return: Amount of byte written (always 1)
 */

int pct_func(char *buffer, va_list ap)
{
	(void) ap;
	*buffer = '%';

	return (1);
}
