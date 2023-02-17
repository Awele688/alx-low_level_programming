#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
		putchar(lowerc);

	putchar('\n');

	return (0);
}
