#include "main.h"
#include <stddef.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: num to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j = 63;
	int count = 0;
	unsigned long int curr;

	while (j >= 0)
	{
		curr = n >> j;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		j--;
	}
	if (count == NULL)
		_putchar('0');
}
