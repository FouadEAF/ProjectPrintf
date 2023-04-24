#include "main.h"
#include <stdio.h>

/**
 * print_chr - put the character c to stdout.
 * @arguments: input char.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: On success 1.
 */

int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char ch;

	ch = va_arg(arguments, int);
	handl_buf(buf, ch, ibuf);

	return (1);
}
