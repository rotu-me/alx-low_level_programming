#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: argument count
 * @av: pointer to size ac
 * Return: NULL if ac == 0 or av == null
 */

char *argstostr(int ac, char **av)
{
int i, j, k, size;
char *arg;
size = 0;
k = 0;
if (ac == 0 || av == NULL)
return (NULL);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
size++;
j++;
}
size++;
j++;
}
arg = malloc((sizeof(char) * size) + 1);
if (arg == NULL)
return (NULL);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
arg[k] = av[i][j];
j++;
k++;
}
arg[k] = '\n';
k++;
j++;
}
arg[k] = '\0';
return (arg);
}
