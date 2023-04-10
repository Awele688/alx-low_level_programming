#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ptr to number
 * @index: index of bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
