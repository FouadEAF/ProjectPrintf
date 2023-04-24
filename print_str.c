#include "main.h"

/**
 * print_str - put the string to output.
 * @arguments: input string.
 * @buf: buffer pointer.
 * @ibuf: index for buffer pointer.
 * Return: On success 1.
 */

int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	char nill[] = "(null)";

	s = va_arg(arguments, char *);
	
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handl_buf(buf, nill[i], ibuf);
		return (6);
	}
	
	for (i = 0; s[i]; i++)
		ibuf = handl_buf(buf, s[i], ibuf);

	return (i);
}
