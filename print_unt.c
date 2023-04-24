#include "main.h"

/**
 * print_unt - put an unsigned int.
 * @arguments: number to print.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: number of chars printed.
 */

int print_unt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned int int_pos, int_temp, i, div;

	int_pos = va_arg(arguments, unsigned int);
	int_temp = int_pos;
	div = 1;
	
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handl_buf(buf, ((int_pos / div) % 10) + '0', ibuf);
	}
	
	return (i);
}
