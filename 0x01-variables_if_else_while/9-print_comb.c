#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 38; i < 48; i++)
{
putchar(i);
if (i != 47)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
