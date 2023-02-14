#include "main.h"

/**
 * binary_to_unit - function to convert binary numbers to decimal
 * @b:string of binary digits(containing only 0 or 1.
 *
 * Return:decimal equivalent of binary
 */
  unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 1, deci = 0;
	int k = 0, m = 0;

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

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
