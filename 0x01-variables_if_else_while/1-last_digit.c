#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: returns 0 if successful
 */

int main(void)
{
int n, ldn;
srand(time(0));
n = rand() - RAND_MAX / 2;
ldn = n % 10;
if (ldn > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ldn);
else if (ldn == 0)
printf("Last digit of %d is %d and is 0\n", n, ldn);
else if (ldn < 6 && ldn != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldn);
return (0);
}
