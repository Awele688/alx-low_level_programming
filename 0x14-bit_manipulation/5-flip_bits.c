#include "main.h"
/**
 * flip_bits - num of bits to flip to get from one num to another
 * @n: first num
 * @m: second num
 *
 * Return: num of bits to chg
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 63;
	int num = 0;
	unsigned long int present;
	unsigned long int exclu = n ^ m;

	while (j >= 0)
	{
		present = exclu >> j;
		if (present & 1)
			num++;
		j--;
	}

	return (num);
}
