#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space in
 * memory containing a copy of a string passed
 * @str: pointer to the string being duplicated
 * Return: NULL if str is NULL, memory insufficient and point
 * to duplicated string on success
 */
char *_strdup(char *str)
{
char *nstr;
unsigned int len, i;
if (str == NULL)
return (NULL);
len = 0;
while (str[len] != 0)
len++;
nstr = malloc(sizeof(char) *  (len + 1));
if (nstr == NULL)
return (NULL);
for (i = 0; i < len; i++)
nstr[i] = str[i];
nstr[len] = '\0';
return (nstr);
}
