#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two given strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated stringon success
 * and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
unsigned int len1, len2, size, i, j;
char *newstr;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
size = len1 + len2;
newstr = malloc((sizeof(char) * size)+1);
if (newstr == NULL)
return (NULL);
i = 0;
while (i < len1)
{
newstr[i] = s1[i];
i++;
}
j = 0;
while (i <= size)
{
newstr[i] = s2[j];
i++;
j++;
}
return (newstr);
}
