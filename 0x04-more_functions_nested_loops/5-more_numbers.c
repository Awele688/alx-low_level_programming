#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int d, e;

	for (d = 0; d < 10; d++)
	{
		for (e = 0; e < 15; e++)
		{
			if (e >= 10)
			_putchar(e / 10 + '0');
			_putchar(e % 10 + '0');
		}

		_putchar('\n');
	}
}
