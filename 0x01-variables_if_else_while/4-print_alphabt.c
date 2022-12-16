#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 if successful
 */

int main(void)
{
char i;
for (i = 'a'; (i <= 'z' && i != 'q' && i != 'e'); i++)
putchar(i);
putchar('\n');
return (0);
}
