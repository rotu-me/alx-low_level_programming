#include <stdio.h>

/**
 *main - Entry point
 *Return: returns 0 if successful
 */

int main(void)
{
int i, I;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (I = 'A'; I <= 'Z'; I++)
putchar(I);
putchar('\n');
return (0);
}
