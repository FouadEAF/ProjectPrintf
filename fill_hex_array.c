#include "main.h"

/**
 * fill_hex_array - print the character c to stdout.
 * @bnr: array where is stored the binary.
 * @hex: array where is stored the hexadecimal.
 * @isupp: integer that determines if the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hex.
 * Return: binary array.
 */

char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int p, i, j, toletter;

	hex[limit] = '\0';

	if (isupp)
		toletter = 55;
	else
		toletter = 87;

	for (i = (limit * 4) - 1; i >= 0; i--)
	{
		for (p = 0, j = 1; j <= 8; j *= 2, i--)
			p = ((bnr[i] - '0') * j) + p;
		i++;
		if (p < 10)
			hex[i / 4] = p + 48;
		else
			hex[i / 4] = p + toletter;
	}

	return (hex);
}