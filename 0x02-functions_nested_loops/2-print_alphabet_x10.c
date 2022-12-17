#include "main.h"

/**
 * print_alphabet_x10- prints a-z 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
int a = 0;
while(a < 10)
{
char i;
for (i = 'a'; i <= 'z'; i++) 
_putchar(i);
_putchar('\n');
a++;
}
}
