#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area soring n bytes
 * @src: copies n bytes from memory area
 * @n: number of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}

	return (dest);
}
