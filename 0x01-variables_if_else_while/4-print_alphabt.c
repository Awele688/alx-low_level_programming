#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
	{
		if (lowerc != 'e' && lowerc != 'q')
			putchar(lowerc);
	}

	putchar('\n');

	return (0);
}
