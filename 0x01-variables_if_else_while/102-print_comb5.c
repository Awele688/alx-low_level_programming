#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0
 */
int main(void)
{
int c, d;

for (c = 0; c < 100; c++)
{
for (d = 0; d < 100; d++)
{
if (c < d)
{
putchar((c / 10) + 48);
putchar((c % 10) + 48);
putchar(' ');
putchar((d / 10) + 48);
putchar((d % 10) + 48);
if (c != 98 || d != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
