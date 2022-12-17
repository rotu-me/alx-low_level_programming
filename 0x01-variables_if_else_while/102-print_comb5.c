#include <stdio.h>

/**
 * main - print a combination of two digits
 * Return: Always 0
 */

int main(void)
{
int a;
int b;
for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
if (b > a)
{
putchar(a / 10 + '0');
putchar(a % 10 + '0');
putchar(' ');
putchar(b / 10 + '0');
putchar(b % 10 + '0');
if( a * 100 + b != 9899)
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
