#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'z'; lowerc >= 'a'; lowerc--)
		putchar(lowerc);

	putchar('\n');

	return (0);
}
