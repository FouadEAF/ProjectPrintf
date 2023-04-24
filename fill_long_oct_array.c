#include "main.h"

/**
 * fill_long_oct_array - calculates a long oct number.
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 * Return: binary array.
 */

char *fill_long_oct_array(char *bnr, char *oct)
{
	int p, i, j, ioct, limit;

	oct[22] = '\0';

	for (i = 63, ioct = 21; i >= 0; i--, ioct--)
	{
		if (i > 0)
			limit = 4;
		else
			limit = 1;
		for (p = 0, j = 1; j <= limit; j *= 2, i--)
			p = ((bnr[i] - '0') * j) + p;
		i++;
		oct[ioct] = p + '0';
	}

	return (oct);
}
