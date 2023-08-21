#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * it will use at most n bytes from src
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
