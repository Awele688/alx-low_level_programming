#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - write a keygen for crackme5
 * @argc: no of args passed
 * @argv: args passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int j, a;
	size_t length, sum;
	char *m = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char o[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	o[0] = m[(length ^ 59) & 63];
	for (j = 0, sum = 0; j < length; j++)
		sum += argv[1][j];
	o[1] = m[(sum ^ 79) & 63];
	for (j = 0, a = 1; j < length; j++)
		a *= argv[1][j];
	o[2] = m[(a ^ 85) & 63];
	for (a = argv[1][0], j = 0; j < length; j++)
		if ((char)a <= argv[1][j])
			a = argv[1][j];
	srand(a ^ 14);
	o[3] = m[rand() & 63];
	for (a = 0, j = 0; j < length; j++)
		a += argv[1][j] * argv[1][j];
	o[4] = m[(a ^ 239) & 63];
	for (a = 0, j = 0; (char)j < argv[1][0]; j++)
		a = rand();
	o[5] = m[(a ^ 229) & 63];
	printf("%s\n", o);
	return (0);
}
