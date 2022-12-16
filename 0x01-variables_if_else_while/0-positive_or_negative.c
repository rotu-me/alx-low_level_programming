#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: returns 0 if successful
 */

int main()
{
int n;
srand (time(0));
n = rand () - RAND_MAX/ 2;
if (n > 0)
    printf("%d is positive", n);
else if (n = 0)
    printf("%d is 0",n);
else
    printf("%d is negative",n);
return (0)
}
