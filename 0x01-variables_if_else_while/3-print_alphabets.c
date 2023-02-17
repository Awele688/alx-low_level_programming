#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,uppercase
 * Return: Always 0
 */
int main(void)
{
	char lowerc;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
		putchar(lowerc);

	for (lowerc = 'A'; lowerc <= 'Z'; lowerc++)
		putchar(lowerc);

	putchar('\n');

	return (0);
}
