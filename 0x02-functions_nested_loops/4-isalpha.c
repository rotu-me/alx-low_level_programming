#include "main.h"

/**
 * _isalpha - checcks if a character is an alphabet
 * @c: the character
 * Return: 1 if an alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
return (1);
else
return (0);
}
