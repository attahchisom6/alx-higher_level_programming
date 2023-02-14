#include "main.h"

/**
 * binary_to_uint - function to convert binary numbers to decimal
 * @b:string of binary digits(containing only 0 or 1.
 *
 * Return:decimal equivalent of binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 1, deci = 0;
	int k = 0;

	if (b == NULL)
		return (0);

	while (b[k] != '\0')
		k++;

	k--;
	for (; k >= 0; k--)
	{
		if (b[k] == '0')
		{
			p *= 2;
			continue;
		}
		else if (b[k] == '1')
		{
			deci += p;
			p *= 2;
			continue;
		}
		return (0);
	}
	return (deci);
}
