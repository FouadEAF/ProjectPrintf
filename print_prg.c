#include "main.h"

/**
 * print_prg - put the character c to stdout.
 * @a: input char.
 * @buf: buffer pointer.
 * @i: index for buffer p.
 * Return: On success 1.
 */

int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
